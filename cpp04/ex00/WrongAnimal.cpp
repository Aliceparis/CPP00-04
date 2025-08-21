#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor Default called\n";
}
WrongAnimal::WrongAnimal(const std::string type): _type(type)
{
    std::cout << "WrongAnimal constructor Param called\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal constructor Copy called\n";
    *this = other;
}
WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal assignment operator called\n";
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

/*membre fonction*/
void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sound like wrong wrong wrong\n";
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}



WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "WrongCat constructor Default called\n";
    this->_type = "WrongCat";
}
WrongCat::WrongCat(const std::string name): WrongAnimal("WrongCat"), _name(name)
{
    std::cout << "WrongCat constructor Param called\n";
    this->_type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& other): WrongAnimal("WrongCat"), _name(other._name)
{
    std::cout << "WrongCat constructor Copy called\n";
}
WrongCat&    WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignment operator called\n";
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        this->_name = other._name;
    }
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

/*membre fonction*/
void    WrongCat::makeSound() const
{
    std::cout << "🐱WrongCat makes sound like wrong wrong wrong\n";
}

