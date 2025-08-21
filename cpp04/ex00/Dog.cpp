#include "Animal.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Class Dog constructor Default called" << std::endl;
    this->type = "Dog";
}
Dog::Dog(const std::string name): Animal("Dog"), _name(name)
{
    std::cout << "Class Dog constructor Param called" << std::endl;
}
Dog::Dog(const Dog& other): Animal(other), _name(other._name)
{
    std::cout << "Class Dog constructor Copy called" << std::endl;
}
Dog&    Dog::operator=(const Dog& other)
{
    std::cout << "Class Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        this->_name = other._name;
    }
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Class Dog destructor called" << std::endl;
}

/*membre fonction*/
void    Dog::makeSound() const
{
    std::cout << "Dog makes a sound Woof Woof 🐶\n";
}
