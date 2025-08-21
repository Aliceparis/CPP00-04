#include "Zombie.hpp"

int main(void)
{
    int N = 3;
    Zombie* test_Zombie;
    test_Zombie = zombieHorde(N, "zomzom");
    if (!test_Zombie)
        return (0);
    for(int i(0); i < N; i++)
    {
        std::cout << "Index: " << i + 1 << std::endl;
        test_Zombie[i].annonce();
    }
    delete[] test_Zombie;
    return (0);
}