#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: nbr of arguments is invalide" << std::endl;
        return (1);
    }
    std::string level = av[1];
    Harl    harl;

    harl.harlFilter(level);
    return (0);
}