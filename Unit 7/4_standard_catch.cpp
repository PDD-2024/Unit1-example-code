#include <iostream>
#include <exception>

int main()
{
    try
    {
        // Generate a random number
        srand((unsigned) time(NULL));
        int random = rand() % 4;
        std::cout << "Random number: " << random << std::endl;
        int *ptr;

        switch (random)
        {
        case 0:
            ptr = new int[1000000000000000000]; // Rises bad_alloc exception
            break;
        case 1:
            // Runtime error exception
            throw std::runtime_error("Runtime error exception");
            break;
        case 2:
            // Logic error exception
            throw std::logic_error("Logic error exception");
            break;
        case 3:
            // Generic exception
            throw std::exception();
            break;
        }
    }
    catch (const std::bad_alloc &e)
    {
        std::cout << "Caught bad_alloc exception: " << e.what() << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Caught runtime_error exception: " << e.what() << std::endl;
    }
    catch (const std::logic_error &e)
    {
        std::cout << "Caught logic_error exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught generic exception: " << e.what() << std::endl;
    }

    return 0;
}
