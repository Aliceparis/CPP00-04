#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog"), _name("")
{
    std::cout << "Dog: default constructor called" << std::endl;
    this->_brain = new Brain();
}
Dog::Dog(const std::string& name): AAnimal("Dog"), _name(name)
{
    std::cout << "Dog: Param constructor called" << std::endl;
    this->_brain = new Brain();
}
Dog::Dog(const Dog& other): AAnimal(other)
{
    std::cout << "Dog: Copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
}
Dog&    Dog::operator=(const Dog& other)
{
    std::cout << "Dog: assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        AAnimal::operator=(other);
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Brain: destructor called" << std::endl;
    delete _brain;
}

/*membre fonction*/
void    Dog::makeSound() const
{
    std::cout << "Dog makes a sound like  Woof Woof 🐶" << std::endl;
}
std::string Dog::getType() const
{
    return (this->_type);
}
Brain*  Dog::get_brain() const
{
    return (this->_brain);
}
