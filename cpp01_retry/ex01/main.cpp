#include "Zombie.hpp"

int main()
{
    int N = 3;

    Zombie* Horde = zombieHorde(N, "horde");
    if (!Horde)
        return (0);
    for(int i(0); i < N; i++)
    {
        std::cout << "Index: " << i + 1 << std::endl;
        Horde[i].announce();
    }
    delete[] Horde;
    return 0;
}