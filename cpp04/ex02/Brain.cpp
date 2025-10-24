#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: Default constructor called" << std::endl;
    for(int i(0); i < 100; i++)
        this->ideas[i] = "";
}
Brain::Brain(const Brain& other)
{
    std::cout << "Brain: Copy constructor called" << std::endl;
    for(int i(0); i < 100; i++)
        this->ideas[i] = other.ideas[i];
}
Brain&  Brain::operator=(const Brain& other)
{
    std::cout << "Brain: assignment operator called" << std::endl;
    if (this != &other)
    {
        for(int i(0); i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}
Brain::~Brain()
{
    std::cout << "Brain: destructor called" << std::endl;
}

/*membre fonction*/
void    Brain::set_idee(int index, const std::string& idee)
{
    if (index >=0 && index < 100)
        ideas[index] = idee;
    else
        std::cout << "Error: index is invalide" << std::endl;
}
std::string Brain::get_idee(int index)
{
    if (index >= 0 && index < 100)
        return (this->ideas[index]);
    else
        return ("");
}
