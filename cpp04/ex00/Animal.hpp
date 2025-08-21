#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class   Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string type_);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        /*membre fonction*/
        void    makeSound() const;
        
        /*getter*/
        std::string getType() const;
};

/*
1.private in class Animal should change to protected;
the class animal can use like private, and the heritage Dog and cat can use like public;
2.destructor must to be virtual, it will be called automatiquely 
*/

class   Dog: public Animal
{
    private:
        std::string _name;
    public:
        Dog();
        Dog(const std::string name);
        Dog(const Dog& other);
        Dog&    operator=(const Dog& other);
        ~Dog();

        /*membre fonction*/
        void    makeSound() const;
};


class   Cat: public Animal
{
    private:
        std::string _name;
    public:
        Cat();
        Cat(const std::string name);
        Cat(const Cat& other);
        Cat&    operator=(const Cat& other);
        ~Cat();

        /*membre fonction*/
        void    makeSound() const;
};

#endif