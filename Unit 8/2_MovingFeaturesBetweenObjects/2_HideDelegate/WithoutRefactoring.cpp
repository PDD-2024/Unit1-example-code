#include <iostream>

class ServerConnection {
public:
    void connect() {
        std::cout << "Connected to server" << std::endl;
    }
};

class Server {
private:
    static ServerConnection connection;

public:
    static ServerConnection& getConnection() {
        return connection;
    }
};

// Static member initialization
ServerConnection Server::connection;

int main() {
    // Obtain server connection instance from Server class
    ServerConnection& connection = Server::getConnection();
    
    // Use the connection
    connection.connect();
    
    return 0;
}
