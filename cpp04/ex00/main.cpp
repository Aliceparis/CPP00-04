#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const   Animal* meta = new Animal();
    meta->makeSound();
    delete meta;

    std::cout << "-----Dog-------" << std::endl;
    const Animal*   j = new Dog();
    std::cout << j->getType() << std::endl;
    j->makeSound();
    delete j;

    std::cout << "-------Cat test ---------------" << std::endl;
    const Animal*   i = new Cat();
    std::cout << i->getType() << std::endl;
    i->makeSound();
    delete i;

    std::cout << "-------WrongAnimal test-----------" << std::endl;
    const   WrongAnimal*    wrongmeta = new WrongAnimal();
    wrongmeta->makeSound();
    delete wrongmeta;

    std::cout << "----------WrongCat test----------" << std::endl;
    const WrongCat* wrongcat = new WrongCat();
    std::cout << wrongcat->getType() << std::endl;
    wrongcat->makeSound();
    delete wrongcat;

    return 0;
}