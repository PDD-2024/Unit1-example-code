#include <iostream>
#include <curl/curl.h>

#include "json.hpp"

// for convenience
using json = nlohmann::json;

nlohmann::json ResponseToJSON(std::string *response)
{
    nlohmann::json jsonResponse;
    try
    {
        jsonResponse = nlohmann::json::parse(*response);
    }
    catch (nlohmann::json::parse_error &e)
    {
        std::cout << "JSON parse error: " << e.what() << '\n';
    }

    return jsonResponse;
}

// Callback function to write the received data
size_t WriteCallback(void *contents, size_t size, size_t nmemb, std::string *response)
{
    size_t totalSize = size * nmemb;
    response->append((char *)contents, totalSize);
    return totalSize;
}

nlohmann::json CurlGET(std::string endpoint, std::string parameters)
{
    CURL *curl;
    curl = curl_easy_init(); // Create a curl handle
    if (!curl) // Check if the curl handle is initialized correctly
        return NULL;

    // Response information
    std::string response;
    CURLcode res;

    std::string url = endpoint;
    // Set the URL to perform the GET request
    if (!parameters.empty())
    {
        url += "?" + parameters;
    }
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    // Set the callback function to write the received data
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    // Enable verbose output
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);

    // Perform the GET request
    res = curl_easy_perform(curl);

    if (res != CURLE_OK)
    {
        std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
    }

    std::cout << "***************************************************************** " << std::endl;
    std::cout << "Performing Curl GET " << std::endl;
    std::cout << "Endpoint: " << endpoint << std::endl;
    std::cout << "Parameters: " << parameters << std::endl;
    std::cout << "Composed Url: " << url << std::endl;
    std::cout << "Result code: " << res << std::endl;
    nlohmann::json jsonResponse = ResponseToJSON(&response);
    std::cout << "JSON Response: " << jsonResponse.dump(4) << std::endl;

    // Clean up
    curl_easy_cleanup(curl);
    return jsonResponse;
}

nlohmann::json CurlWikipediaPUT(std::string endpoint, std::string data, std::string token)
{
    CURL *curl;
    curl = curl_easy_init(); // Create a curl handle
    if (!curl) // Check if the curl handle is initialized correctly
        return NULL;
    // Response information
    std::string response;
    CURLcode res;
    std::string url = endpoint;
    // Set the URL to perform the PUT request
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    // Set the callback function to write the received data
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
    // Enable verbose output
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    // Set the PUT data
    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "PUT");
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());

    // Set the header
    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "Content-Type: application/json");
    headers = curl_slist_append(headers, ("Authorization: Bearer " + std::string(token)).c_str());
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    // Perform the PUT request
    res = curl_easy_perform(curl);
    if (res != CURLE_OK)
    {
        std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
    }

    std::cout << "***************************************************************** " << std::endl;
    std::cout << "Performing Curl PUT " << std::endl;
    std::cout << "Endpoint: " << endpoint << std::endl;
    std::cout << "Data: " << data << std::endl;
    std::cout << "Composed Url: " << url << std::endl;
    std::cout << "Result code: " << res << std::endl;
    nlohmann::json jsonResponse = ResponseToJSON(&response);
    std::cout << "JSON Response: " << jsonResponse.dump(4) << std::endl;
    // Clean up
    curl_easy_cleanup(curl);
    curl_slist_free_all(headers);
    return jsonResponse;
}



int main()
{

    // Initialize libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);

    // Create a curl handle

    std::string endpoint = "https://api.wikimedia.org/core/v1/wikipedia/en/search/title";
    std::string parameters = "q=earth&limit=5";
    // https://api.wikimedia.org/wiki/Core_REST_API/Reference/Search/Search_titles
    nlohmann::json jsonResponse = CurlGET(endpoint, parameters);

    // std::cout << "JSON Response: " << jsonResponse["pages"].dump(4) << std::endl;
    for (int x = 0; x < jsonResponse["pages"].size(); x++)
    {
        std::cout << jsonResponse["pages"][x]["title"] << std::endl;
    }

    // https://restful-api.dev/
    endpoint = "https://api.restful-api.dev/objects";
    parameters = "";
    jsonResponse = CurlGET(endpoint, parameters);

    endpoint = "https://api.wikimedia.org/core/v1/wikipedia/en/page/Wikipedia:Sandbox";
    parameters = "";
    jsonResponse = CurlGET(endpoint, parameters);

    // https://api.wikimedia.org/wiki/Core_REST_API/Reference/Pages/Edit_page
    endpoint = "https://api.wikimedia.org/core/v1/wikipedia/en/page/Wikipedia:Sandbox";
    std::string TOKEN = "PUT YOUR TOKEN HERE";
    std::string Firstlines = "{{Please leave this line alone (sandbox heading)}} Hello this is a test from the Wikimedia API.";
    std::string DATA = "{\"source\": \""+Firstlines+"\", \"comment\": \"Testing out the Wikimedia API\", \"latest\":"+jsonResponse["latest"].dump()+"}";

    jsonResponse = CurlWikipediaPUT(endpoint, DATA, TOKEN);

    // Clean up libcurl
    curl_global_cleanup();

    return 0;
}