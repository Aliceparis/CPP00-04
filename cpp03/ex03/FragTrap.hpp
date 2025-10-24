#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class   FragTrap: virtual public ClapTrap
{
    protected:
        static const unsigned int   _frag_energy = 100;
        static const unsigned int   _frag_dmg = 30;
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        /*membre fonction*/
        void    attack(const std::string& target);
        void    highFivesGuys() const;
        /*debug*/
        void    display() const;
};


#endif