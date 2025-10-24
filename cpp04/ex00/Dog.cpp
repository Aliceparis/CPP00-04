#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _name("")
{
    std::cout << "Dog: Default constructor called" << std::endl;
}
Dog::Dog(const std::string& name): Animal("Dog"), _name(name)
{
    std::cout << "Dog: Param constructor called" << std::endl;
}
Dog::Dog(const Dog& other): Animal(other), _name(other._name)
{
    std::cout << "Dog: Copy constructor called" << std::endl;
}
Dog&    Dog::operator=(const Dog& other)
{
    std::cout << "Dog: assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        this->_name = other._name;
    }
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Dog: destructor called" << std::endl;
}

/*membre fonction*/
void    Dog::makeSound() const
{
    std::cout << "Dog makes a sound like  Woof Woof 🐶" << std::endl;
}