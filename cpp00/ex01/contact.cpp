#include "contact.hpp"

Contact::Contact()
{
    _first_n = "";
    _last_n = "";
    _nick_n = "";
    _phone_nbr = "";
    _dark_secret = "";
}
Contact::~Contact()
{
}
bool    Contact::only_space(std::string str)
{
    for(size_t i(0); i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
            return (false);
    }
    return (true);
}

bool    Contact::set_first_name(std::string str)
{
    if (str.empty() || only_space(str))
        return (false);
    _first_n = str;
    return (true);
}
bool    Contact::set_last_name(std::string str)
{
    if (str.empty() || only_space(str))
        return (false);
    _last_n = str;
    return (true);
}
bool    Contact::set_nick_name(std::string str)
{
    if (str.empty() || only_space(str))
        return (false);
    _nick_n = str;
    return (true);
}
bool    Contact::set_phone_nbr(std::string str)
{
    if (str.empty() || only_space(str))
        return (false);
    _phone_nbr = str;
    return (true);
}
bool    Contact::set_dark_secret(std::string str)
{
    if (str.empty() || only_space(str))
        return (false);
    _dark_secret = str;
    return (true);
}
std::string Contact::get_first_name() const
{
    return (_first_n);
}
std::string Contact::get_last_name() const
{
    return (_last_n);
}
std::string Contact::get_nick_name() const
{
    return (_nick_n);
}
std::string Contact::get_phone_nbr() const
{
    return (_phone_nbr);
}
std::string Contact::get_dark_secret() const
{
    return (_dark_secret);
}

void    Contact::display_info()
{
    std::cout << "First name: " << get_first_name() << std::endl;
    std::cout << "Last name: " << get_last_name() << std::endl;
    std::cout << "Nick name: " << get_nick_name() << std::endl;
    std::cout << "Phone number: " << get_phone_nbr() << std::endl;
    std::cout << "Dark secret: " << get_dark_secret() << std::endl;
}