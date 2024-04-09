# C++ Project with Doxygen Documentation

This is a simple C++ project that demonstrates the use of Doxygen for generating code documentation. The project consists of two classes: `Person` and `Student`.

## Project Structure

The project is structured into the following files:

- `Person.h` and `Person.cpp`: These files define and implement the `Person` class.
- `Student.h` and `Student.cpp`: These files define and implement the `Student` class, which inherits from `Person`.
- `main.cpp`: This is the entry point of the application.

## Building the Project

To build the project, use the following command:

```bash
g++ -o app main.cpp Person.cpp Student.cpp