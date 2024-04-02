#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class SocialMediaUser {
private:
    string username;
    string email;
    string generateID() {
        string id = "";
        const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
        const int idLength = 10;
        for (int i = 0; i < idLength; ++i) {
            id += chars[rand() % chars.length()];
        }
        return id;
    }
    void displayUserInfo(string id) {
        cout << "User created successfully!\n";
        cout << "Username: " << username << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << id << endl;
    }
    void getUserInfo() {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter email: ";
        cin >> email;
    }
public:
    void createUser() {
        // Generate ID
        srand(time(0));
        string generatedID = generateID();
        // Get user info
        getUserInfo();
        // Add user to database
        displayUserInfo(generatedID);
    }
};

int main() {
    SocialMediaUser user1;
    user1.createUser();
    return 0;
}
