#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const std::string& type);
        AAnimal(const AAnimal& other);
        AAnimal&    operator=(const AAnimal& other);
        virtual ~AAnimal() = 0;

        /*membre fonction*/
        virtual std::string getType() const = 0;
        virtual void makeSound() const = 0;
};

#endif