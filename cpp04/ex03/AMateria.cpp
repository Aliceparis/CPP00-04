#include "AMateria.hpp"

AMateria::AMateria(): _type("")
{
    std::cout << "AMateria: default constructor called" << std::endl;
}
AMateria::AMateria(const std::string& type): _type(type)
{
    std::cout << "AMateria: Param constructor called" << std::endl;
}
AMateria::AMateria(const AMateria& other)
{
    std::cout << "AMateria: Copy constructor called" << std::endl;
    *this = other;
}
AMateria&   AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria: assignment operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}
AMateria::~AMateria()
{
    std::cout << "AMateria: destructor called" << std::endl;
}

/*membre fonction*/
std::string const&  AMateria::getType() const
{
    return (this->_type);
}
void    AMateria::use(ICharacter& target)
{
    if (this->getType() == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->getType() == "cure")
         std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    else
        std::cout << "Error: Type not found" << std::endl;
}