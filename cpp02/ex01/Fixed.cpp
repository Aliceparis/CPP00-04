#include "Fixed.hpp"

const int   Fixed::_bits = 8;

Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}
Fixed&  Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
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

int Fixed::getRawBits(void) const
{
    return (this->_value);
}
void    Fixed::setRawBits(int const raw)
{
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

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}