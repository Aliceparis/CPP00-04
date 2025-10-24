#include "Animal.hpp"
#include "Dog.hpp"
#include  "Cat.hpp"
#include "Brain.hpp"

void    test_polymorpho()
{
    std::cout << "=======test polymorpho======" << std::endl;
    Animal* meta[4];
    for (int i(0); i < 4; i++)
    {
        if (i % 2 == 0)
            meta[i] = new Dog();
        else
            meta[i] = new Cat();
    }
    for(int i(0); i < 4; i++)
        meta[i]->makeSound();
    for(int i(0); i < 4; i++)
        delete meta[i];
}
void    test_brain()
{
    std::cout << "========test brain========" << std::endl;
    Cat cat1;
    cat1.getbrain()->set_idee(0, "sleeping");
    std::cout << "Cat1 has idee 0: " << cat1.getbrain()->get_idee(0) << std::endl;
    std::cout << "Cat1 has idee 101: " << cat1.getbrain()->get_idee(101) << std::endl;
    std::cout << "Cat1 type: " << cat1.getType() << std::endl;

    Cat cat2 = cat1;
    std::cout << "Cat2 has idee 0: " << cat2.getbrain()->get_idee(0) << std::endl;
    std::cout << "Cat2 type: " << cat2.getType() << std::endl;

    Dog dog1 = Dog("Dog1");
    std::cout << "Dog1 type: " << dog1.getType() << std::endl;
    dog1.getbrain()->set_idee(0, "eating");
    std::cout << "Dog1 has idee 0: " << dog1.getbrain()->get_idee(0) << std::endl;

    Dog dog2 = dog1;
    std::cout << "Dog2 type: " << dog2.getType() << std::endl;
    std::cout << "Dog2 has idee 0: " << dog2.getbrain()->get_idee(0) << std::endl;
    std::cout << "Dog2 has idee 101: " << dog2.getbrain()->get_idee(101) << std::endl;
}

int main()
{
    test_polymorpho();
    test_brain();
    return 0;
}