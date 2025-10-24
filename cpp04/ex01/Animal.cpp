#include "Animal.hpp"

Animal::Animal(): _type("")
{
    std::cout << "Animal: Default constructor called" << std::endl;
}
Animal::Animal(const std::string& type): _type(type)
{
    std::cout << "Animal: Param constructor called" << std::endl;
}
Animal::Animal(const Animal& other)
{
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = other;
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal: assignment operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

/*membre fonction*/
void    Animal::makeSound() const
{
    std::cout << "Animal makes different sounds" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}