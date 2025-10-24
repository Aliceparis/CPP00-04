#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class  DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap&    operator=(const DiamondTrap& other);
        ~DiamondTrap();

        /*membre fonction*/
        void    attack(const std::string& target);
        void    whoAmI() const;
        /*debug*/
        void    display() const;
};




#endif