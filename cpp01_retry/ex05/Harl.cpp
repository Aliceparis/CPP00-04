#include "Harl.hpp"

void    Harl::debug() const
{
    std::cout << "I love having extra bacon burger." << std::endl;    
}

void    Harl::info() const
{
    std::cout << "I cannot believe adding extra bacon costs more money" << std::endl;
}

void    Harl::warning() const
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void    Harl::error() const
{
    std::cout << "This is unacceptable!" << std::endl;
}
Harl::Harl()
{
    //std::cout << "Harl: Default constructor called" << std::endl;
}
Harl::~Harl()
{
    //std::cout << "Harl: destructor called" << std::endl;
}

/*membre fonction*/
void    Harl::complain(std::string level) 
{
    std::string levels[4] = 
    {
        "DEBUG", "INFO", "WARNING", "ERROR"
    };

    void    (Harl::*fonctions[])() const = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for(int i(0); i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*fonctions[i])();
            return ;
        }
    }
    std::cout << "Error: problem not found" << std::endl;
}

/*
un tableau de pointeurs vers des fonctions
https://learn.microsoft.com/fr-fr/troubleshoot/developer/visualstudio/CXX/language-compilers/declare-pointers-to-functions
*/