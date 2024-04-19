#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> studentGrades;

    // Insert some data into the map
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 85;
    studentGrades["Charlie"] = 95;

    // Access and print the grades
    std::cout << "Alice's grade: " << studentGrades["Alice"] << std::endl;
    std::cout << "Bob's grade: " << studentGrades["Bob"] << std::endl;
    std::cout << "Charlie's grade: " << studentGrades["Charlie"] << std::endl;

    // Check if a student exists in the map
    std::string studentName = "David";
    if (studentGrades.find(studentName) != studentGrades.end()) {
        std::cout << studentName << "'s grade: " << studentGrades[studentName] << std::endl;
    } else {
        std::cout << studentName << " is not found in the map." << std::endl;
    }

    return 0;
}