#include "Fixed.hpp"
#include <cmath>

const int   Fixed::_bits = 8;
/*constructor*/
Fixed::Fixed(): _value(0)
{
    std::cout << "Fixed: Default constructor called" << std::endl;
}
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _value = value << _bits;
}
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _bits));
}
Fixed::Fixed(const Fixed& source)
{
    std::cout << "Fixed: Copy constructor called" << std::endl;
    *this = source;
}
Fixed::~Fixed()
{
    std::cout << "Fixed: destructor called" << std::endl;
}

/*getter setter*/
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits membre function called" << std::endl;
    return (this->_value);
}
void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits membre function called" << std::endl;
    this->_value = raw;
}
float   Fixed::toFloat(void) const
{
    return ((float)_value / (1 << _bits));
}
int Fixed::toInt(void) const
{
    return (_value >> _bits);
}

/*operator*/
Fixed&  Fixed::operator=(const Fixed& other)
{
    std::cout << "Fixed: assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}
//operator comparaison
bool    Fixed::operator>(const Fixed& other) const
{
    return (this->getRawBits() > other.getRawBits());
}
bool    Fixed::operator<(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());
}
bool    Fixed::operator>=(const Fixed& other) const
{
    return (this->getRawBits() >= other.getRawBits());
}
bool    Fixed::operator<=(const Fixed& other) const
{
    return (this->getRawBits() <= other.getRawBits());
}
bool    Fixed::operator==(const Fixed& other) const
{
    return (this->getRawBits() == other.getRawBits());
}
bool    Fixed::operator!=(const Fixed& other) const
{
    return (this->getRawBits() != other.getRawBits());
}

//operator arithmetique
Fixed   Fixed::operator+(const Fixed& other)
{
    Fixed   result;

    result.setRawBits(this->getRawBits() + other.getRawBits());
    return (result);
}
Fixed   Fixed::operator-(const Fixed& other)
{
    Fixed   result;

    result.setRawBits(this->getRawBits() - other.getRawBits());
    return (result);
}
Fixed   Fixed::operator*(const Fixed& other)
{
    Fixed   result;

    result.setRawBits(this->getRawBits() * other.getRawBits() >> _bits);
    return (result);
}
Fixed   Fixed::operator/(const Fixed& other)
{
    Fixed   result;

    result.setRawBits((this->getRawBits() << _bits) / other.getRawBits());
    return  (result);
}

//operator incrementation decrementation
/*Fixed a(5);
Fixed b;
b = a++; a = 6, b = 5
b = ++a; a = 6, b = 6
*/
Fixed&  Fixed::operator++()
{
    ++_value;
    return (*this);
}
Fixed&  Fixed::operator--()
{
    --_value;
    return (*this);
}
Fixed   Fixed::operator++(int)
{
    Fixed   tmp(*this);

    ++(*this);
    return (tmp);
}
Fixed   Fixed::operator--(int)
{
    Fixed   tmp(*this);

    --(*this);
    return (tmp);
}

/*min max*/
Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    return ( a <= b ? a : b);
}
Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b ? a : b);
}
const Fixed&    Fixed::min(const Fixed& a, const Fixed& b)
{
    return ( a <= b ? a : b);
}
const Fixed&    Fixed::max(const Fixed& a, const Fixed& b)
{
    return ( a > b ? a : b);
}


std::ostream&   operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}