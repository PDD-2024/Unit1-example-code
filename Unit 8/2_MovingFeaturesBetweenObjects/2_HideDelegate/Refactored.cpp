#include <iostream>

class ServerConnection
{
public:
    void connect()
    {
        std::cout << "Connected to server" << std::endl;
    }
};

class Server
{
private:
    static ServerConnection connection;

public:
    static ServerConnection &getConnection()
    {
        return connection;
    }

    static void connect()
    {
        if (connection == nullptr)
            connection = new ServerConnection();
        connection.connect();
    }
};

// Static member initialization
ServerConnection Server::connection;

int main()
{
    Server::connect();
    return 0;
}
