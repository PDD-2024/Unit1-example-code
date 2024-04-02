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

    // Getter methods for accessing attributes
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getPosition() const { return position; }
    double getSalary() const { return salary; }
};

class SalaryCalculator {
public:
    static double calculateSalary(const Employee& employee) {
        // Complex logic for salary calculation
        // Example: Calculate bonus, taxes, deductions, etc.
        return employee.getSalary() * 0.9; // Example calculation
    }
};

int main() {
    Employee emp("John Doe", 30, "Software Engineer", 5000.0);
    double calculatedSalary = SalaryCalculator::calculateSalary(emp); // Using SalaryCalculator to calculate salary
    std::cout << "Calculated Salary: " << calculatedSalary << std::endl;
    return 0;
}
