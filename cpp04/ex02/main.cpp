#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    AAnimal*    j = new Dog();
    std::cout << j->getType() << std::endl;
    j->makeSound();
    delete j;

    AAnimal*    cat = new Cat();
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;
    
    return 0;
}