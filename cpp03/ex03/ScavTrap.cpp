#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap: Default constructor called" << std::endl;
    _hit_pts = 100;
    _energy_pts = ScavTrap::_scav_energy; 
    _attack_dmg = 20;
}
ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
    std::cout << "ScavTrap: Param constructor called" << std::endl;
    _hit_pts = 100;
    _energy_pts = ScavTrap::_scav_energy;
    _attack_dmg = 20;
}
ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
    *this = other;
}
ScavTrap&   ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap: assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
        _hit_pts = other._hit_pts;
        _energy_pts = other._energy_pts;
        _attack_dmg = other._attack_dmg;
    }
    return (*this);
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: destructor called" << std::endl;
}

/*membre fonction*/
void    ScavTrap::attack(const std::string& target)
{
    if (this->_hit_pts == 0 || this->_energy_pts == 0)
    {
        std::cout << "ScavTrap: " << _name << " has no hit_points or has no energy pts" << std::endl;
        return ;
    }
    std::cout << "ScavTrap: " << _name << " attacks " << target 
        << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
    this->_energy_pts--;
}
void    ScavTrap::guardGate() const
{
    if (this->_energy_pts == 0)
    {
        std::cout << "ScavTrap " << this->_name
        << " has 0 energy points" << std::endl;
        return ;
    }
    if (this->_hit_pts == 0)
    {
        std::cout << "ScavTrap " << this->_name
        << " has 0 hits poinrs " << std::endl;
    }
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::display() const
{
    std::cout << "ScavTrap " << this->_name
        << " | hits points " << this->_hit_pts
        << " | energy points " << this->_energy_pts
        << " | attack damage " << this->_attack_dmg
        << std::endl;
}