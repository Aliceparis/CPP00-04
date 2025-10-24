#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _name("")
{
    std::cout << "Cat: Default constructor called" << std::endl;
    _brain = new Brain();
}
Cat::Cat(const std::string& name): Animal("Cat"), _name(name)
{
    std::cout << "Cat: Param constructor called" << std::endl;
    this->_brain = new Brain();
}
Cat::Cat(const Cat& other): Animal(other), _name(other._name)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
}
Cat&    Cat::operator=(const Cat& other)
{
    std::cout << "Cat: assignment operator called" << std::endl;
    if (this != &other)
    {
       _name = other._name;
       delete _brain;
       this->_brain = new Brain(*other._brain);
    }
    return (*this);
}
Cat::~Cat()
{
    std::cout << "Cat: destructor called" << std::endl;
    delete _brain;
}

/*membre fonction*/
void    Cat::makeSound() const
{
    std::cout << "Cat makes a sound like meow meow 🐱" << std::endl;
}
Brain*  Cat::getbrain() const
{
    return (this->_brain);
}