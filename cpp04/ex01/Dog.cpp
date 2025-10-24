#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _name("")
{
    std::cout << "Dog: Default constructor called" << std::endl;
    this->_brain = new Brain();
}
Dog::Dog(const std::string& name): Animal("Dog"), _name(name)
{
    std::cout << "Dog: Param constructor called" << std::endl;
    this->_brain = new Brain();
}
Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog: Copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
}
Dog&    Dog::operator=(const Dog& other)
{
    std::cout << "Dog: assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        delete _brain;
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Dog: destructor called" << std::endl;
    delete _brain;
}

/*membre fonction*/
void    Dog::makeSound() const
{
    std::cout << "Dog makes a sound like  Woof Woof 🐶" << std::endl;
}

Brain*  Dog::getbrain() const
{
    return (this->_brain);
}