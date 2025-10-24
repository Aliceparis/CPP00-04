#include "Weapon.hpp"

Weapon::Weapon(): _type("")
{
    std::cout << "Weapon: Default constructor called" << std::endl;
}
Weapon::Weapon(const std::string& type): _type(type)
{
    std::cout << "Weapon: Param constructor called" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "Weapon: destructor called" << std::endl;
}
/*membre fonction*/
std::string Weapon::getType() const
{
    return (this->_type);
}
void    Weapon::setType(const std::string& type)
{
    _type = type;
}