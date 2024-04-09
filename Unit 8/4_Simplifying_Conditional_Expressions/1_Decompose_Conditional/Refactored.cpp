#include <iostream>

// Base class for all employees
class SalaryCalculator
{
    double calculateSalaryManager()
    {
        double baseSalary = 5000.0;
        double bonus = 0.1 * baseSalary; // 10% of base salary
        return baseSalary + bonus;
    }
    double calculateSalaryEmployee()
    {
        double baseSalary = 4000.0;
        double overtimeHours = 10;  // Example overtime hours
        double overtimeRate = 20.0; // Example overtime rate per hour
        double overtimePay = overtimeHours * overtimeRate;
        return baseSalary + overtimePay;
    }

public:
    double calculateSalary(bool isManager)
    {
        if (isManager)
        {
            return calculateSalaryManager();
        }
        else
        {
            return calculateSalaryEmployee();
        }
    }
};

int main()
{
    bool isManager = true; // Example condition

    SalaryCalculator *calculator = new SalaryCalculator();
    double salary = calculator->calculateSalary(isManager);

    std::cout << "Salary: $" << salary << std::endl;

    delete calculator; // Remember to delete dynamically allocated memory

    return 0;
}
