#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class   Dog: public Animal
{
    private:
        std::string _name;
    
    public:
        Dog();
        Dog(const std::string& name);
        Dog(const Dog& other);
        Dog&    operator=(const Dog& other);
        ~Dog();

        /*membre fonction*/
        void    makeSound() const;
};



#endif