#include "Harl.hpp"

void Harl::debug()  const
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
    // std::cout << "Harl: default constructor called" << std::endl;
}
Harl::~Harl()
{
    //std::cout << "Harl: destructor called" << std::endl;
}

/*membre fonction*/
void    Harl::harlFilter(const std::string& level)
{
    std::string levels[4] = 
        {
            "DEBUG", "INFO", "WARNING", "ERROR"
        };
    int i = 0;
    while(i < 4)
    {
        if (levels[i] == level)
            break ;
        i++;
    }
    switch(i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            Harl::debug();
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            Harl::info();
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            Harl::warning();
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            Harl::error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}
/*
in the switch, the cercle will continue entil where is the break !
*/