#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
        int _value;
        static const int    _bits;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& source);
        Fixed&  operator=(const Fixed& other);
        int getRawBits(void) const;
        void    setRawBits(int const raw);

        Fixed(const int value);
        Fixed(const float value);
        float   toFloat(void) const;
        int toInt(void) const;
};

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed);

#endif