#include "ICharacter.hpp"

ICharacter::~ICharacter()
{
    std::cout << "ICharacter: destructor called" << std::endl;
}

Character::Character(): _name("")
{
    std::cout << "Character: Default constructor called" << std::endl;
    for(int i(0); i < 4; i++)
        _invenroy[i] = NULL;
}
Character::Character(const std::string& name): _name(name)
{
    std::cout << "Character: Param constructor called" << std::endl;
    for(int i(0); i < 4; i++)
        _invenroy[i] = NULL;
}
Character::Character(const Character& other): _name(other._name)
{
    std::cout << "Character: Copy constructor called" << std::endl;
    for(int i(0); i < 4; i++)
        this->_invenroy[i] = NULL;
    for(int i(0); i < 4; i++)
    {
        if (other._invenroy[i] != NULL)
            this->_invenroy[i] = other._invenroy[i]->clone();
    }
}
Character&  Character::operator=(const Character& other)
{
    std::cout << "Character: assignment operator called" << std::endl;
    if (this != &other)
    {
        for(int i(0); i < 4; i++)
        {
            if (this->_invenroy[i])
            {
                delete this->_invenroy[i];
                this->_invenroy[i] = NULL;
            }
        }
        for(int i(0); i < 4; i++)
        {
            if (other._invenroy[i] != NULL)
                this->_invenroy[i] = other._invenroy[i]->clone();
        }
    }
    return (*this);
}
Character::~Character()
{
    std::cout << "Character: destructor called" << std::endl;
    for(int i(0); i < 4; i++)
    {
        delete _invenroy[i];
        _invenroy[i] = NULL;
    }
}

/*membre fonction*/
std::string const&  Character::getName() const
{
    return (this->_name);
}
void    Character::equipe(AMateria* m)
{
    if (!m)
        return ;
    for(int i(0); i < 4; i++)
    {
        if (this->_invenroy[i] == m)
            return ;
        if (!this->_invenroy[i])
        {
            this->_invenroy[i] = m;
            std::cout << _name << " get a new materia " << m->getType() << std::endl;
            return ;
        }
    }
    std::cout << "Invenroy is full" << std::endl;
}
void    Character::unequipe(int idx)
{
    if (idx >= 0 && idx < 4)
        this->_invenroy[idx] = NULL;
}
void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->_invenroy[idx])
        _invenroy[idx]->use(target);
}