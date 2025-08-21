#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int _value;
        static const int   _bits;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed& source); //constructor recopie
        Fixed& operator=(const Fixed& other); //assignement operator
        int getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif