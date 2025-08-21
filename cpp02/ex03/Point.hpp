#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class   Point
{
    private:
        const Fixed _x;
        const Fixed _y;

    public:
        Point();
        Point(const float a, const float b);
        Point(const Point& source);
        Point&  operator=(const Point& other);
        ~Point();
        /*getter*/
        Fixed   get_x(void) const;
        Fixed   get_y(void) const;

};

Fixed   cross_calcul(const Point& a, const Point& b, const Point& point);

bool    bsp(Point const a, Point const b, Point const c, Point const point);



#endif