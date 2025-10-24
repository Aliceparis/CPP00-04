#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string _name;
        Weapon* _arm;

    public:
        HumanB();
        HumanB(const std::string& name);
        ~HumanB();

        /*membre fonction*/
        void    attack() const;
        void    setWeapon(Weapon& weapon);
};


#endif