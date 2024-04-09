#include "Student.h"

Student::Student(const std::string& name, const std::string& major) 
    : Person(name), major(major) {}

std::string Student::getMajor() const {
    return major;
}