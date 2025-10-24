#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("")
{
    std::cout << "AAnimal: Default constructor called" << std::endl;
}
AAnimal::AAnimal(const std::string& type): _type(type)
{
    std::cout << "AAnimal: Param constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "AAnimal: Copy constructor called" << std::endl;
    *this = other;
}
AAnimal&    AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal: assignment operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}
AAnimal::~AAnimal()
{
    std::cout << "AAnimal: destructor called" << std::endl;
}
