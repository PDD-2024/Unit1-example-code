#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
    Person person("John Doe");
    Student student("Jane Doe", "Computer Science");

    std::cout << "Person: " << person.getName() << std::endl;
    std::cout << "Student: " << student.getName() << ", Major: " << student.getMajor() << std::endl;

    return 0;
}