#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"), _name("")
{
    std::cout << "WrongCat: Default constructor called" << std::endl;
}
WrongCat::WrongCat(const std::string& name): WrongAnimal("WrongCat"), _name(name)
{
    std::cout << "WrongCat: Param constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other), _name(other._name)
{
    std::cout << "WrongCat: Copy constructor called" << std::endl;
}
WrongCat&    WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat: assignment operator called" << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        _name = other._name;
    }
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat: destructor called" << std::endl;
}

/*membre fonction*/
void    WrongCat::makeSound() const
{
    std::cout << "🐱WrongCat makes sound like wrong wrong wrong" << std::endl;
}