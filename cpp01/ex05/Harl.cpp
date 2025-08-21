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

void    Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void    (Harl::*fonctions[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for(int i(0); i < 4; i++)
    {
        if (level == levels[i])
        {
           (this->*fonctions[i])();
           return ;
        }
    }
    std::cout << "Problem not found" << std::endl;
}