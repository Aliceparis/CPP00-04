#include "phonebook.hpp"

Phonebook::Phonebook()
{
    count = 0;
    oldindex = 0;
}
Phonebook::~Phonebook()
{
}
void    Phonebook::add_contact()
{
    std::string input;
    int index;

    std::cout << "------Adding a contact-------" << std::endl;
    if (count < NB_CONTACT)
        index = count;
    else
        index = oldindex;
    while (true)
    {
        std::cout << "Entry first name: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            exit(0);
        if (contacts[index].set_first_name(input))
            break ;
        std::cout << "cannot be empty" << std::endl;
    }
    while (true)
    {
        std::cout << "Entry last name: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            exit(0);
        if (contacts[index].set_last_name(input))
            break ;
        std::cout << "cannot be empty" << std::endl;
    }
    while (true)
    {
        std::cout << "Entry nick name: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            exit(0);
        if (contacts[index].set_nick_name(input))
            break ;
        std::cout << "cannot be empty" << std::endl;
    }
    while (true)
    {
        std::cout << "Entry phone number: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            exit(0);
        if (contacts[index].set_phone_nbr(input))
            break ;
        std::cout << "cannot be empty" << std::endl;
    }
    while (true)
    {
        std::cout << "Entry dark secret: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            exit(0);
        if (contacts[index].set_dark_secret(input))
            break ;
        std::cout << "cannot be empty" << std::endl;
    }
    if (count < NB_CONTACT)
        count++;
    oldindex = (oldindex + 1) % NB_CONTACT;
    std::cout << "------Add contact success------" << std::endl;
}

void    Phonebook::display_header()
{
    std::cout << std::setw(10) << "Index" << "|"
        << std::setw(10) << "First name" << "|"
        << std::setw(10) << "Last name" << "|"
        << std::setw(10) << "Nick name" << "|"
        << std::endl;
}
std::string Phonebook::display_colonne(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + '.');
    return (str);
}

void    Phonebook::display_all_contact()
{
    display_header();
    for(int i(0); i < count; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << display_colonne(contacts[i].get_first_name()) << "|";
        std::cout << std::setw(10) << display_colonne(contacts[i].get_last_name()) << "|";
        std::cout << std::setw(10) << display_colonne(contacts[i].get_nick_name()) << "|";
        std::cout << std::endl;
    }
}

void    Phonebook::search_contact()
{
    int index;
    std::string input;

    if (count == 0)
    {
        std::cout << "0 contact, add first" << std::endl;
        return ;
    }
    display_all_contact();
    while(true)
    {
        std::cout << "Entry index" << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            exit(0);
        std::istringstream iss(input);
        if (!(iss >>index) || index < 1 || index > count || !iss.eof())
        {
            std::cout << "Index invalid" << std::endl;
            continue ;
        }
        break ;
    }
    contacts[index - 1].display_info();
}