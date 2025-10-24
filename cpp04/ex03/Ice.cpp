#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Ice: default constructor called" << std::endl;
}

Ice::Ice(const Ice& other): AMateria(other)
{
    std::cout << "Ice: Copy constructor called" << std::endl;
    *this = other;
}
Ice&   Ice::operator=(const Ice& other)
{
    std::cout << "Ice: assignment operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}
Ice::~Ice()
{
    std::cout << "Ice: destructor called" << std::endl;
}

/*membre fonction*/
AMateria*   Ice::clone() const
{
    return (new Ice(*this));
}
/*void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}*/