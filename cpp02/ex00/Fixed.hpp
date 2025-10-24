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

};



#endif