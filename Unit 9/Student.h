/**
 * @file Student.h
 * @brief This file contains the Student class
 */

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

/**
 * @class Student
 * @brief A class that represents a student
 */
class Student : public Person {
public:
    /**
     * @brief Construct a new Student object
     * 
     * @param name The name of the student
     * @param major The major of the student
     */
    Student(const std::string& name, const std::string& major);

    /**
     * @brief Get the major of the student
     * 
     * @return std::string The major of the student
     */
    std::string getMajor() const;

private:
    std::string major; ///< The major of the student
};

#endif // STUDENT_H