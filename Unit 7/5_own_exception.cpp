#include <iostream>
#include <exception>

class MyException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "My custom exception";
    }
};

class MyExceptionCustomMessage : public std::exception
{
private:
    char *message;

public:
    MyExceptionCustomMessage(char *msg) : message(msg) {}
    const char *what() const noexcept override
    {
        return message;
    }
};

int main()
{
    try
    {
        throw MyExceptionCustomMessage("This is a custom message");
    }
    catch(const MyExceptionCustomMessage &e)
    {
        std::cout << "Caught custom message exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
