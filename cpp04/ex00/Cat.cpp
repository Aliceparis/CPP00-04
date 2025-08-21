#include "Animal.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Class Cat constructor default called\n";
    this->type = "Cat";
}
Cat::Cat(const std::string name): Animal("Cat"), _name(name)
{
    std::cout << "Class Cat constructor Param called\n";
}
Cat::Cat(const Cat& other): Animal(other), _name(other._name)
{
    std::cout << "Class Cat constructor Copy called" << std::endl;
}
Cat&    Cat::operator=(const Cat& other)
{
    std::cout << "Class Cat assignement operator called\n";
    if (this != &other)
    {
        Animal::operator=(other);
        this->_name = other._name;
    }
    return (*this);
}
Cat::~Cat()
{
    std::cout << "Class Cat destructor called" << std::endl;
}

/*membre fonction*/
void    Cat::makeSound() const
{
    std::cout << "Cat make sounds like meow meow 🐱\n";
}