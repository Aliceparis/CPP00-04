#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
        int _value;
        static const int    _bits;

    public:
        /*forme canonique*/
        Fixed();
        Fixed(const Fixed& source);
        Fixed&  operator=(const Fixed& other);
        ~Fixed();

        Fixed(const int value);
        Fixed(const float value);

        /*getter setter*/
        int getRawBits(void) const;
        void    setRawBits(int const raw);

        /*int float convertion*/
        float   toFloat(void) const;
        int toInt(void) const;

        /*operator*/
        //comparaison
        bool    operator>(const Fixed& other) const;
        bool    operator<(const Fixed& other) const;
        bool    operator>=(const Fixed& other) const;
        bool    operator<=(const Fixed& other) const;
        bool    operator==(const Fixed& other) const;
        bool    operator!=(const Fixed& other) const;
        //arithmetique
        Fixed   operator+(const Fixed& other);
        Fixed   operator-(const Fixed& other);
        Fixed   operator*(const Fixed& other);
        Fixed   operator/(const Fixed& other);
        //incrementation et decrementation
        Fixed&  operator++();
        Fixed&  operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);

        /*min max*/
        static Fixed&   min(Fixed& a, Fixed& b);
        static Fixed&   max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed);

#endif