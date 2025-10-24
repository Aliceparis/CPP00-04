#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource: default constructor called" << std::endl;
    for(int i(0); i < 4; i++)
        _storage[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource: Copy constructor called" << std::endl;
    for(int i(0); i < 4; i++)
        this->_storage[i] = NULL;
    for(int i(0); i < 4; i++)
    {
        if (other._storage[i] != NULL)
            this->_storage[i] = other._storage[i]->clone();
    }
}
MateriaSource&  MateriaSource::operator=(const MateriaSource& other)
{
    std::cout << "MateriaSource: assignment operator called" << std::endl;
    if (this != &other)
    {
        for(int i(0); i < 4; i++)
        {
            if (this->_storage[i])
            {
                delete this->_storage[i];
                this->_storage[i] = NULL;
            }
        }
        for(int i(0); i < 4; i++)
        {
            if (other._storage[i] != NULL)
            {
                this->_storage[i] = other._storage[i]->clone();
            }
        }
    }
    return (*this);
}
MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource: destructor called" << std::endl;
    for(int i(0); i < 4; i++)
    {
        delete _storage[i];
        _storage[i] = NULL;
    }
}

/*membre fonction*/
void    MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for(int i(0); i < 4; i++)
    {
        if (_storage[i] == NULL)
        {
            _storage[i] = m;
            std::cout << "Learn a new materia " << m->getType() << std::endl;
            return ;
        }
    }
    std::cout << "Storage is full" << std::endl;
}
AMateria*    MateriaSource::createMateria(std::string const& type)
{
    for(int i(0); i < 4; i++)
    {
        if (_storage[i] && _storage[i]->getType() == type)
            return (_storage[i]->clone());
        else
            std::cout << "Empty in storage" << std::endl;
    }
    std::cout << "Error: No match materia found" << std::endl;
    return (NULL);
}

