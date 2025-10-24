#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat"), _name("")
{
    std::cout << "Cat: Default constructor called" << std::endl;
    _brain = new Brain();
}
Cat::Cat(const std::string& name): AAnimal("Cat"), _name(name)
{
    std::cout << "Cat: Param constructord called" << std::endl;
    _brain = new Brain();
}
Cat::Cat(const Cat& other): AAnimal(other)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    _brain = new Brain(*other._brain);
}
Cat&    Cat::operator=(const Cat& other)
{
    std::cout << "Cat: assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        AAnimal::operator=(other);
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
std::string Cat::getType() const
{
    return (this->_type);
}
Brain*  Cat::get_brain() const
{
    return (this->_brain);
}
