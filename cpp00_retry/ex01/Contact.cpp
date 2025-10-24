#include "Contact.hpp"

Contact::Contact()
{
    // std::cout << "Contact: default constructor called" << std::endl;
    _first_name = "";
    _last_name = "";
    _nick_name = "";
    _phone_nbr = "";
    _dark_secret = "";
}
Contact::~Contact()
{
}

/*getter*/
std::string Contact::get_first_name() const
{
    return (this->_first_name);
}
std::string Contact::get_last_name() const
{
    return (this->_last_name);
}
std::string Contact::get_nick_name() const
{
    return (this->_nick_name);
}
std::string Contact::get_phone_nbr() const
{
    return (this->_phone_nbr);
}
std::string Contact::get_dark_secret() const
{
    return (this->_dark_secret);
}

/*setter*/
bool Contact::set_first_name(const std::string &str)
{
    if (str.empty() || only_space(str))
        return (false);
    _first_name = str;
    return (true);
}
bool Contact::set_last_name(const std::string &str)
{
    if (str.empty() || only_space(str))
        return (false);
    _last_name = str;
    return (true);
}
bool Contact::set_nick_name(const std::string &str)
{
    if (str.empty() || only_space(str))
        return (false);
    _nick_name = str;
    return (true);
}
bool Contact::set_phone_nbr(const std::string &str)
{
    if (str.empty() || only_space(str))
        return (false);
    _phone_nbr = str;
    return (true);
}
bool Contact::set_dark_secret(const std::string &str)
{
    if (str.empty() || only_space(str))
        return (false);
    _dark_secret = str;
    return (true);
}

/*membre fonction*/
void Contact::display_info() const
{
    std::cout << "First name: " << get_first_name() << " | "
              << "Last name: " << get_last_name() << " | "
              << "Nick name: " << get_nick_name() << " | "
              << "Phone nbr: " << get_phone_nbr() << " | "
              << "Dark secret: " << get_dark_secret() << std::endl;
}

bool Contact::only_space(const std::string& str)
{
    for (size_t i(0); i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
            return (false);
    }
    return (true);
}