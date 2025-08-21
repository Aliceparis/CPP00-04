#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "Zombie: " << _name << " is created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Zombie: " << _name << " is destroyed" << std::endl;
}

void    Zombie::annonce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}