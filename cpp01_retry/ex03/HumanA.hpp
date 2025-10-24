#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class   HumanA
{
    private:
        std::string _name;
        Weapon&  _arm;
    public:
        HumanA(const std::string& name,Weapon& weapon);
        ~HumanA();

        /*membre fonction*/
        void    attack() const;

};


#endif