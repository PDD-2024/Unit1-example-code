#include <iostream>

namespace geometry
{
    namespace constants
    {
        float pi = 3.14;
        float e = 2.71;
    } // namespace constants

    using namespace constants;

    float diameter(float radius)
    {

        return 2 * pi * radius;
    }

    class Circle
    {
    private:
        float radius;

    public:
        Circle(float radius) : radius(radius) {}
        float get_area()
        {
            return pi * radius * radius;
        }
    };

} // namespace name

int main()
{
    using geometry::pi;

    std::cout << "Pi: " << pi << std::endl;

    using namespace geometry;

    std::cout << "Diameter: " << diameter(10) << std::endl;

    Circle circle(10);
    std::cout << "Area: " << circle.get_area() << std::endl;

    return 0;
}
