#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon burger." << std::endl;
}
void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money" << std::endl;
}
void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}
void    Harl::error()
{
    std::cout << "This is unacceptable!" << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::filter(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4)
    {
        if (level == levels[i])
            break ;
        i++;
    }
    switch(i)
    {
        case 0:
            std::cout << "[ DEBUG ]\n";
            Harl::debug();
        case 1:
            std::cout << "[ INFO ]\n";
            Harl::info();
        case 2:
            std::cout << "[ WARNING ]\n";
            Harl::warning();
        case 3:
            std::cout << "[ ERROR ]\n";
            Harl::error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
/*
in the switch, the cercle will continue entil where is the break !
*/