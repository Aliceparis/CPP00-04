#include "Zombie.hpp"

Zombie::Zombie(): _name("")
{
    //std::cout << "Zombie: Default constructor called" << std::endl;
}
Zombie::Zombie(const std::string& name): _name(name)
{
    //std::cout << "Zombie: Param constructor called" << std::endl;
}
Zombie::~Zombie()
{
    //std::cout << "Zombie: destructor called" << std::endl;
}

/*membre fonction*/
void    Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;    
}
void    Zombie::setname(const std::string& name)
{
    this->_name = name;
}