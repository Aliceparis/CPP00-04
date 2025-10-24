#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hit_pts(10),
                       _energy_pts(10), _attack_dmg(0)
{
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit_pts(10),
                                              _energy_pts(10), _attack_dmg(0)
{
    std::cout << "ClapTrap: Param constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    *this = other;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap: assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hit_pts = other._hit_pts;
        _energy_pts = other._energy_pts;
        _attack_dmg = other._attack_dmg;
    }
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

/*membre fonction*/
void ClapTrap::attack(const std::string &target)
{
    if (this->_hit_pts == 0 || this->_energy_pts == 0)
    {
        std::cout << "ClapTrap has no hit points or energy points" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attack_dmg << " points of damage!" << std::endl;
    this->_energy_pts--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_pts >= amount)
    {
        std::cout << "ClapTrap " << this->_name << " takes " << amount
                  << " hits points" << std::endl;
        _hit_pts -= amount;
    }
    else
    {
        unsigned int tmp(_hit_pts);
        std::cout << "ClapTrap " << this->_name << " takes " << tmp
                  << " hits points" << std::endl;
        _hit_pts = 0;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_pts == 0 || this->_energy_pts == 0)
    {
        std::cout << "ClapTrap has no hit points or energy points" << std::endl;
        return;
    }
    _hit_pts += amount;
    _energy_pts--;
}

/*debug*/
void ClapTrap::display() const
{
    std::cout << "ClapTrap: " << _name << " |hits pts: "
              << _hit_pts << " |energy pts: " << _energy_pts
              << "| attack dmg: " << _attack_dmg << std::endl;
}