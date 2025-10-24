#include "Fixed.hpp"
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(): _value(0)
{
    std::cout << "Fixed: Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Fixed: Copy constructor called" << std::endl;
    *this = other;
}
Fixed&  Fixed::operator=(const Fixed& other)
{
    std::cout << "Fixed: assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other._value;
    return (*this);
}
Fixed::~Fixed()
{
    std::cout << "Fixed: destructor called" << std::endl;
}

/*membre fonction*/
int Fixed::getRawBits() const
{
    std::cout << "getRawBits membre function called" << std::endl;
    return (this->_value);
}
void    Fixed::setRawBits(int const raw)
{    
    std::cout << "setRawBits membre function called" << std::endl;
    _value = raw;
}
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _value = value << _bits;
}
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value *(1 << _bits));
}

float   Fixed::toFloat() const
{
    return ((float)_value / (1 << _bits));
}

int Fixed::toInt() const
{
    return (_value >> _bits);
}


std::ostream&   operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}