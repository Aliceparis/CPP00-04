#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int _value;
        static const int   _bits;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed&  operator=(const Fixed& other);
        ~Fixed();

        /*membre fonction*/
        int getRawBits() const;
        void    setRawBits(int const raw);

        Fixed(const int value);
        Fixed(const float value);
        float   toFloat() const;
        int toInt() const;

};

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed);

#endif