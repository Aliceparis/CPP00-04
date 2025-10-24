#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class   Cat: public Animal
{
    private:
        std::string _name;
        Brain*  _brain;
    public:
        Cat();
        Cat(const std::string& name);
        Cat(const Cat& other);
        Cat&    operator=(const Cat& other);
        ~Cat();

        /*membre fonction*/
        void    makeSound() const;
        Brain*  getbrain() const;
};


#endif