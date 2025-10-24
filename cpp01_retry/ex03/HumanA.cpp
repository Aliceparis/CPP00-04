#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name),
                                                          _arm(weapon)
{
    //std::cout << "HumanA: Param constructor called" << std::endl;
}
HumanA::~HumanA()
{
    //std::cout << "HumanA: destructor called" << std::endl;
}

/*membre fonction*/
void HumanA::attack() const
{
    std::cout << this->_name << " attacks with their "
              << _arm.getType() << std::endl;
}