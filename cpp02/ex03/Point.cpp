#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::~Point()
{
}
Point::Point(const float a, const float b): _x(a), _y(b)
{
}
/*copy constructor:
    -membre const need to be initialiser, not assignement
    */
Point::Point(const Point& source): _x(source.get_x()), _y(source.get_y())
{
}
Point&  Point::operator=(const Point& other)
{
    (void)other;
    return (*this);
}

/*getter*/
Fixed   Point::get_x(void) const
{
    return (this->_x);
}
Fixed   Point::get_y(void) const
{
    return (this->_y);
}

Fixed   cross_calcul(const Point& a, const Point& b, const Point&  point)
{
    Fixed   x1 = b.get_x() - a.get_x();
    Fixed   x2 = point.get_x() - a.get_x();
    Fixed   y1 = b.get_y() - a.get_y();
    Fixed   y2 = point.get_y() - a.get_y();
    return (x1 * y2 - y1 * x2);
}
bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   cross1, cross2, cross3;

    cross1 = cross_calcul(a, b, point);
    cross2 = cross_calcul(b, c, point);
    cross3 = cross_calcul(c, a, point);

    /*std::cout << "cross1: " << cross1 << std::endl;
    std::cout << "cross2: " << cross2 << std::endl;
    std::cout << "cross3: " << cross3 << std::endl;*/

    return ((cross1 > 0 && cross2 > 0 && cross3 > 0) || (cross1 < 0 && cross2 < 0 && cross3 < 0));
}