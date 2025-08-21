#include "Point.hpp"

int main()
{
    //triangle abc
    Point   a(0.0f, 0.0f);
    Point   b(2.0f, 0.0f);
    Point   c(1.0f, 2.0f);
    //test point 
    Point   inside(1.0f, 1.0f);
    Point   outside(2.0f, 2.0f);

    std::cout << "point 1(1.0f, 1.0f) is inside :" << (bsp(a, b, c, inside) ? "YES" : "NO" ) << std::endl; 
    std::cout << "Point 2(2.0f, 2.0f) is inside :" << (bsp(a, b, c, outside) ? "YES" : "NO" ) << std::endl;
    return (0);
}