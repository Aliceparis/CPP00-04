#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class   Cure: public AMateria
{
    private:
    public:
        Cure();
        Cure(const Cure& other);
        Cure&   operator=(const Cure& other);
        ~Cure();

        /*membre fonction*/
        AMateria*   clone() const;
};




#endif