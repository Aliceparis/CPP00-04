#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class   Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_nbr;
        std::string _dark_secret;
    public:
        Contact();
        ~Contact();

        /*getter*/
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nick_name() const;
        std::string get_phone_nbr() const;
        std::string get_dark_secret() const;

        /*setter*/
        bool    set_first_name(const std::string& str);
        bool    set_last_name(const std::string& str);
        bool    set_nick_name(const std::string& str);
        bool    set_phone_nbr(const std::string& str);
        bool    set_dark_secret(const std::string& str);

        /*membre fonction*/
        void    display_info() const;
        bool    only_space(const std::string& str);
};







#endif