#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class   ICharacter
{
    public:
        virtual ~ICharacter();

        /*membre fonction*/
        virtual std::string const &getName() const = 0;
        virtual void    equipe(AMateria* m) = 0;
        virtual void    unequipe(int idx) = 0;
        virtual void    use(int idx, ICharacter& target) = 0;
};

class   Character: public ICharacter
{
    private:
        std::string _name;
        AMateria*   _invenroy[4];
    public:
        Character();
        Character(const std::string& name);
        Character(const Character& other);
        Character&  operator=(const Character& other);
        ~Character();

        /*membre fonction*/
        std::string const&  getName() const;
        void    equipe(AMateria* m);
        void    unequipe(int idx);
        void    use(int idx, ICharacter& target);
};

#endif