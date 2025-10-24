#include "HumanB.hpp"

HumanB::HumanB() : _name("")
{
    //std::cout << "HumanB: Default constructor called" << std::endl;
}
HumanB::HumanB(const std::string &name) : _name(name)
{
    //std::cout << "HumanB: Param constructor called" << std::endl;
}
HumanB::~HumanB()
{
    //std::cout << "HumanB: destructor called" << std::endl;
}

/*membre fonction*/
void HumanB::attack() const
{
    std::cout << this->_name << " attacks with their "
              << _arm->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon& weapon)
{
    _arm = &weapon;
}