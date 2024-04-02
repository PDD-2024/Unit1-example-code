#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age;
    std::string position;
    double salary;

public:
    Employee(std::string name, int age, std::string position, double salary)
        : name(name), age(age), position(position), salary(salary) {}

    // Method to calculate salary directly within the Employee class
    double calculateSalary() const {
        // Complex logic for salary calculation
        // Example: Calculate bonus, taxes, deductions, etc.
        return salary * 0.9; // Example calculation
    }

    // Getter methods for accessing attributes
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getPosition() const { return position; }
    double getSalary() const { return salary; }
};

int main() {
    Employee emp("John Doe", 30, "Software Engineer", 5000.0);
    double calculatedSalary = emp.calculateSalary(); // Directly calculating salary within Employee class
    std::cout << "Calculated Salary: " << calculatedSalary << std::endl;
    return 0;
}
