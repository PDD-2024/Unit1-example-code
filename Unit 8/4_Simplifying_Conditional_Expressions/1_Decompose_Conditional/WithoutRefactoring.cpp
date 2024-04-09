#include <iostream>

class SalaryCalculator {
public:
    void calculateSalary(bool isManager) {
        if (isManager) {
            double baseSalary = 5000.0;
            double bonus = 0.1 * baseSalary; // 10% of base salary
            double totalSalary = baseSalary + bonus;
            std::cout << "Manager's salary: $" << totalSalary << std::endl;
        } else {
            double baseSalary = 4000.0;
            double overtimeHours = 10; // Example overtime hours
            double overtimeRate = 20.0; // Example overtime rate per hour
            double overtimePay = overtimeHours * overtimeRate;
            double totalSalary = baseSalary + overtimePay;
            std::cout << "Engineer's salary: $" << totalSalary << std::endl;
        }
    }
};

int main() {
    bool isManager = true; // Example condition
    SalaryCalculator emp;
    emp.calculateSalary(isManager);

    return 0;
}

