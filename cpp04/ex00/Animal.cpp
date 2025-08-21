#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Class Animal constructor Default called" << std::endl;
}
Animal::Animal(const std::string type_): type(type_)
{
    std::cout << "Class Animal constructor Param called" << std::endl;
}
Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "Class Animal constructor Copy called" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Class Animal assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.getType();
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Class Animal Destructor called" << std::endl;
}

/*membre fonction*/
void    Animal::makeSound() const
{
    std::cout << "Animal makes different sounds" << std::endl;
}

/*getter*/
std::string Animal::getType() const
{
    return (this->type);
}
