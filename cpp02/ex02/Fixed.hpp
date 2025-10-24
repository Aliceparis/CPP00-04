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
        /*constructor*/
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& source);
        /*destructor*/
        ~Fixed();

        /*getter setter*/
        int getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int toInt(void) const;


        /*operator*/
        Fixed&  operator=(const Fixed& other);
        //operator comparaison'
        bool    operator>(const Fixed& other) const;
        bool    operator<(const Fixed& other) const;
        bool    operator>=(const Fixed& other) const;
        bool    operator<=(const Fixed& other) const;
        bool    operator==(const Fixed& other) const;
        bool    operator!=(const Fixed& other) const;
        //operator arithmetique
        Fixed   operator+(const Fixed& other);
        Fixed   operator-(const Fixed& other);
        Fixed   operator*(const Fixed& other);
        Fixed   operator/(const Fixed& other);
        //operator incrementation decrementation
        Fixed&  operator++(); //prefix ++i
        Fixed&  operator--();
        Fixed   operator++(int); //postfix i++
        Fixed   operator--(int);

        /*min max*/
        static Fixed&  min(Fixed& a, Fixed& b);
        static Fixed&  max(Fixed& a, Fixed& b);
        static const Fixed&    min(const Fixed& a, const Fixed& b);
        static const Fixed&    max(const Fixed& a, const Fixed& b);

};

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed);



#endif