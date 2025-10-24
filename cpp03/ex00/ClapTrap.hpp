#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap
{
    private:
        std::string _name;
        unsigned int  _hit_pts;
        unsigned int    _energy_pts;
        unsigned int    _attack_dmg;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);
        ClapTrap&   operator=(const ClapTrap& other);
        ~ClapTrap();

        /*membre fonction*/
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        /*debug*/
        void    display() const;
};


#endif