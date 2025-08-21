#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* Horde;

    if (N <= 0)
        return (NULL);
    Horde = new Zombie[N];
    for(int i(0); i < N; i++)
        Horde[i].set_name(name);
    return (Horde);
}

/*
allocation must have the default constructor!
*/
/*
Zombie* zombieHorde(int N, std::string name)
{
    Zombie* Horde;

    Horde = new Zombie[N];
    for(int i(0); i < N; i++)
        Horde[i] = Zombie(name);
    return (Horde);
}
in this fonction: we can see N zombie are created first, and then destroyed after;
then N zombie created again with the name, and destroyed after the call of this fonction
the allocation is no problem, juste does 2 times the same thing.
But with setname, the N zombie are just created one time!

*/