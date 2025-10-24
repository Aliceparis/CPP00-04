#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class   ScavTrap: virtual public ClapTrap
{
    protected:
        static const unsigned int   _scav_energy = 50;
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();

        /*membre fonction*/
        void    attack(const std::string& target);
        void    guardGate() const;
        /*debug*/
        void    display() const;
};


#endif