#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
    name = "";
    _hit_pts = FragTrap::_hit_pts;
    _energy_pts = ScavTrap::_scav_energy;
    _attack_dmg = FragTrap::_attack_dmg;
}
DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
                                                    ScavTrap(name), FragTrap(name), name(name)
{
    std::cout << "DiamondTrap: Param constructor called" << std::endl;
    _hit_pts = FragTrap::_hit_pts;
    _energy_pts = ScavTrap::_scav_energy;
    _attack_dmg = FragTrap::_frag_dmg;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other)
{
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
    *this = other;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap: assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        name = other.name;
        _hit_pts = other._hit_pts;
        _energy_pts = other._energy_pts;
        _attack_dmg = other._attack_dmg;
    }
    return (*this);
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: destructor called" << std::endl;
}

/*membre fonction*/
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI() const
{
    std::cout << "DiamondTrap " << this->name << " has a ClapTrap name: "
              << ClapTrap::_name << std::endl;
}

/*debug*/
void    DiamondTrap::display() const
{
    std::cout << "DiamondTrap: " << this->name 
        << "| hits points " << _hit_pts
        << "| energy points " << _energy_pts
        << "| attack dmg " << _attack_dmg
        << std::endl;
} 