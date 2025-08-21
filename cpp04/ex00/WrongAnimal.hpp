#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string type);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal&    operator=(const WrongAnimal& other);
        virtual ~WrongAnimal();

        /*membre fonction*/
        void    makeSound() const;

        /*getter*/
        std::string getType() const;
};


class   WrongCat: public WrongAnimal
{
    private:
        std::string _name;
    public:
        WrongCat();
        WrongCat(const std::string name);
        WrongCat(const WrongCat& other);
        WrongCat&    operator=(const WrongCat& other);
        ~WrongCat();

        /*membre fonction*/
        void    makeSound() const;
};




#endif