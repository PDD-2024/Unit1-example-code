#include "6_include-guard.h"


Circle::Circle(float radius) : radius(radius) {}

float Circle::get_area()
{
    return 3.14 * radius * radius;
}

