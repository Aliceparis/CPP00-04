#include "Fixed.hpp"

const int   Fixed::_bits = 8;

/*constructor*/
//default
Fixed::Fixed(): _value(0)
{
}
//recopie
Fixed::Fixed(const Fixed& source)
{
    *this = source;
}
//operator d'affection
Fixed&  Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}
//destructor
Fixed::~Fixed()
{
}

Fixed::Fixed(const int value)
{
    _value = value << _bits;
}
Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _bits));
}


/*getter setter*/
void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
int Fixed::getRawBits(void) const
{
    return (this->_value);
}

/*int float convertion*/
float   Fixed::toFloat(void) const
{
    return ((float)_value / (1 << _bits));
}
int Fixed::toInt(void) const
{
    return (_value >> _bits);
}


/*operator*/
//comparaison
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
//arithmetique
Fixed   Fixed::operator+(const Fixed& other)
{
    Fixed   result;

    result.setRawBits(this->getRawBits() + other.getRawBits());
    return(result);
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

    result.setRawBits(this->getRawBits() * other.getRawBits() << _bits);
    return (result);
}
Fixed   Fixed::operator/(const Fixed& other)
{
    Fixed   result;

    result.setRawBits((this->getRawBits() << _bits) / other.getRawBits());
    return (result);
}
//incrementation et decrementation
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
    return(tmp);
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
    return (a <= b ? a : b);
}
Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b ? a : b);
}
const Fixed&    Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a <= b ? a : b);
}
const Fixed&    Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b ? a : b);
}







std::ostream&   operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return(out);
}