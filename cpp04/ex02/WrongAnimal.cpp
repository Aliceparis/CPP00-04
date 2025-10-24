#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("")
{
    std::cout << "WrongAnimal: Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const std::string& type): _type(type)
{
    std::cout << "WrongAnimal: Param constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal: Copy constructor called" << std::endl;
    *this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal: assignment operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

/*membre fonction*/
void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sounds like wrong wrong wrong" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}