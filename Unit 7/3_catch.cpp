#include <iostream>
using namespace std;

void httpCodes(int value) {
    try {
        if (value == 400) {
            throw 400; // Bad Request
        } else if (value == 403) {
            throw 403; // Forbidden
        } else if (value == 418) {
            throw 418; // I'm a teapot
        } else if (value < 0) {
            throw "Error: Negative value!";
        }
        else {
            cout << "No error code: " << value << endl;
        }
    }
    catch (int errorCode) {
        cerr << "Error: HTTP Code " << errorCode << endl;
    }
    catch (...) {
        cerr << "Error: Unknown code" << endl;
    }
}

int main() {
    httpCodes(400); 
    httpCodes(-3); 
    httpCodes(200); 
    httpCodes(403);  

    return 0;
}
