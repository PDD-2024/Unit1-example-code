/**
 * @file Person.h
 * @brief This file contains the Person class
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>

/**
 * @class Person
 * @brief A class that represents a person
 */
class Person {
public:
    /**
     * @brief Construct a new Person object
     * 
     * @param name The name of the person
     */
    Person(const std::string& name);

    /**
     * @brief Get the name of the person
     * 
     * @return std::string The name of the person
     */
    std::string getName() const;

private:
    std::string name; ///< The name of the person
};

#endif // PERSON_H