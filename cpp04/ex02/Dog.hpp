#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include <iostream>
# include "Brain.hpp"

class   Dog: public AAnimal
{
    private:
        std::string _name;
        Brain*  _brain;
    public:
        Dog();
        Dog(const std::string& name);
        Dog(const Dog& other);
        Dog&    operator=(const Dog& other);
        ~Dog();

        /*membre fonction*/
        void    makeSound() const;
        std::string getType() const;
        Brain*  get_brain() const;
};




#endif