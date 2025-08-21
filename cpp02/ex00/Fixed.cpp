#include "Fixed.hpp"

const int   Fixed::_bits = 8;
//constructor default
Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(Fixed& source)
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