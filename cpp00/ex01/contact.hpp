#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string _first_n;
        std::string _last_n;
        std::string _nick_n;
        std::string _phone_nbr;
        std::string _dark_secret;

    public:
        Contact();
        ~Contact();
        //setter
        bool    set_first_name(std::string str);
        bool    set_last_name(std::string str);
        bool    set_nick_name(std::string str);
        bool    set_phone_nbr(std::string str);
        bool    set_dark_secret(std::string str);
        //getter
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nick_name() const;
        std::string get_phone_nbr() const;
        std::string get_dark_secret() const;
        bool    only_space(std::string str);
        void    display_info();

};

#endif