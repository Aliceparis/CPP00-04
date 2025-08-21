#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "********destructor*******" << std::endl;
    delete i;
    delete j;
    delete meta;

    std::cout << "********WrongAnimal******" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong = new WrongCat();

    std::cout << wrong->getType() << " " << std::endl;

    wrong->makeSound();
    wrong_meta->makeSound();

    std::cout << "********destructor*******" << std::endl;
    delete wrong;
    delete wrong_meta;
 
    return (0);
}