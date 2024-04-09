/**
 * @file Shape.cpp
 * @author Pablo
 * @brief Example Shape class and Rectangle class
 * 
 * 
 * @version 0.1
 * @date 2024-04-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <cstddef>

/**
 * @brief A class representing a geometric shape.
 *
 * This class provides a generic interface for geometric shapes.
 */
class Shape
{
public:
    /**
     * @brief Constructor for the Shape class.
     */
    Shape();

    /**
     * @brief Destructor for the Shape class.
     */
    virtual ~Shape();

    /**
     * @brief Get the area of the shape.
     *
     * This function calculates and returns the area of the shape.
     *
     * @return The area of the shape.
     */
    virtual double getArea() const = 0;

    /**
     * @brief Get the perimeter of the shape.
     *
     * This function calculates and returns the perimeter of the shape.
     *
     * @return The perimeter of the shape.
     */
    virtual double getPerimeter() const = 0;

    /**
     * @brief Translate the shape by a specified amount.
     *
     * This function translates the shape by the specified horizontal and vertical offsets.
     *
     * @param dx The horizontal offset.
     * @param dy The vertical offset.
     */
    virtual void translate(double dx, double dy) = 0;

    /**
     * @brief Print information about the shape.
     *
     * This function prints information about the shape, including its type and properties.
     *
     * @see getArea(), getPerimeter()
     * @note This function should be overridden by derived classes to provide specific information.
     */
    virtual void printInfo() const;

    /**
     * @brief Check if the shape is valid.
     *
     * This function checks whether the shape is valid and issues a warning if it's not.
     *
     * @warning This function may not work correctly for certain types of shapes.
     */
    virtual bool isValid() const;

    /**
     * @brief Generate a unique identifier for the shape.
     *
     * This function generates a unique identifier for the shape.
     *
     * @attention Ensure that this function is implemented correctly to avoid conflicts.
     *
     * @code
     * // Example code to generate a unique identifier
     * return std::hash<std::string>()(typeid(*this).name());
     * @endcode
     *
     * @return A unique identifier for the shape.
     */
    virtual std::size_t generateId() const = 0;
};

/**
 * @brief A class representing a rectangle.
 *
 * This class inherits from the Shape class and implements a rectangle shape.
 */
class Rectangle : public Shape
{
private:
    double width;  /**< The width of the rectangle. */
    double height; /**< The height of the rectangle. */

public:
    /**
     * @brief Constructor for the Rectangle class.
     *
     * @param width The width of the rectangle.
     * @param height The height of the rectangle.
     */
    Rectangle(double width, double height);

    /**
     * @brief Destructor for the Rectangle class.
     */
    ~Rectangle();

    /**
     * @brief Get the area of the rectangle.
     *
     * Overrides the base class method to calculate the area of the rectangle.
     *
     * @return The area of the rectangle.
     */
    double getArea() const override;

    /**
     * @brief Get the perimeter of the rectangle.
     *
     * Overrides the base class method to calculate the perimeter of the rectangle.
     *
     * @return The perimeter of the rectangle.
     */
    double getPerimeter() const override;

    /**
     * @brief Translate the rectangle by a specified amount.
     *
     * Overrides the base class method to translate the rectangle by the specified offsets.
     *
     * @param dx The horizontal offset.
     * @param dy The vertical offset.
     */
    void translate(double dx, double dy) override;

    /**
     * @brief Print information about the rectangle.
     *
     * Overrides the base class method to print information specific to the rectangle.
     *
     * @see Shape::printInfo()
     */
    void printInfo() const override;

    /**
     * @brief Check if the rectangle is valid.
     *
     * This function checks whether the rectangle is valid.
     *
     * @warning This function currently does not perform any validation.
     */
    bool isValid() const override;

    /**
     * @brief Generate a unique identifier for the rectangle.
     *
     * This function generates a unique identifier for the rectangle.
     *
     * @attention Ensure that this function is implemented correctly to avoid conflicts.
     *
     * @code
     * // Example code to generate a unique identifier
     * return std::hash<std::string>()(typeid(*this).name());
     * @endcode
     *
     * @return A unique identifier for the rectangle.
     */

    std::size_t generateId() const override;
};
