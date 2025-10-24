#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria*   tmp;
    std::cout << "test create materia\n";
    tmp = src->createMateria("ice");
    me->equipe(tmp);
    tmp = src->createMateria("cure");
    me->equipe(tmp);
    me->equipe(tmp);
    me->equipe(tmp);
    me->equipe(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(4, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}