#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class SocialMediaUser {
private:
    string username;
    string email;
public:
    void createUser() {
        // Get user info
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter email: ";
        cin >> email;

        // Generate ID
        string generatedID = "";
        const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
        const int idLength = 10;
        for (int i = 0; i < idLength; ++i) {
            generatedID += chars[rand() % chars.length()];
        }

        // Add user to database
        cout << "User created successfully!\n";
        cout << "Username: " << username << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << generatedID << endl;
    }
};

int main() {
    SocialMediaUser user1;
    user1.createUser();
    return 0;
}

