#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class   Cat: public AAnimal
{
    private:
        std::string _name;
        Brain*  _brain;

    public:
        Cat();
        Cat(const std::string& other);
        Cat(const Cat& other);
        Cat&    operator=(const Cat& other);
        ~Cat();

        /*membre fonction*/
        void    makeSound() const;
        std::string getType() const;
        Brain*  get_brain() const;
};


#endif