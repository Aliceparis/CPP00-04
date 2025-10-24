#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap: Default constructor called" << std::endl;
    _hit_pts = 100;
    _energy_pts = FragTrap::_frag_energy;
    _attack_dmg = FragTrap::_frag_dmg;
}
FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
    std::cout << "FragTrap: Param constructor called" << std::endl;
    _hit_pts = 100;
    _energy_pts = FragTrap::_frag_energy;
    _attack_dmg = FragTrap::_frag_dmg;
}
FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
    *this = other;
}
FragTrap&   FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap: assignment operator called" << std::endl;
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
FragTrap::~FragTrap()
{
    std::cout << "FragTrap: destructor called" << std::endl;
}

/*membre fonction*/
void    FragTrap::attack(const std::string& target)
{
    if (this->_hit_pts == 0 || this->_energy_pts == 0)
    {
        std::cout << "FragTrap: " << _name << " has no hit_points or has no energy pts" << std::endl;
        return ;
    }
    std::cout << "FragTrap: " << _name << " attacks " << target 
        << ", causing " << _attack_dmg << " points of damage!" << std::endl;
    this->_energy_pts--;
}
void    FragTrap::highFivesGuys() const
{

    if (this->_hit_pts == 0)
    {
        std::cout << "FragTrap " << this->_name
                << " has 0 hits points to hightfive" << std::endl;
        return ;
    }
    if (this->_energy_pts == 0)
    {
        std::cout << "FragTrap " << this->_name
                << " has 0 energy points to give a hightfive" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name
            << " gives a hight five" << std::endl;
}

void    FragTrap::display() const
{
    std::cout << "FragTrap " << this->_name
        << " | hits points " << this->_hit_pts
        << " | energy points " << this->_energy_pts
        << " | attack damage " << this->_attack_dmg
        << std::endl;
}