#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class   Weapon
{
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(const std::string& type);
        ~Weapon();

        /*membre fonction*/
        void    setType(const std::string& type);
        std::string getType() const;
};




#endif