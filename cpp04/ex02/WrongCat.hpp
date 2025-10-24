#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class   WrongCat: public WrongAnimal
{
    private:
        std::string _name;
    public:
        WrongCat();
        WrongCat(const std::string& name);
        WrongCat(const WrongCat& other);
        WrongCat&    operator=(const WrongCat& other);
        ~WrongCat();

        /*membre fonction*/
        void    makeSound() const;
};


#endif