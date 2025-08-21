#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;
    std::string level;

    if (ac != 2)
    {
        std::cerr << "Nbr of arguments not valide" << std::endl;
        return (1);
    }
    level = av[1];
    harl.filter(level);
    return (0);
}