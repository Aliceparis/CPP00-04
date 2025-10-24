#include "Phonebook.hpp"

Phonebook::Phonebook(): count(0), oldindex(0)
{
}
Phonebook::~Phonebook()
{
}

void    Phonebook::add_contact()
{
    int index;
    std::string input;

    std::cout << "-------------Adding a new contact---------" << std::endl;
    if (count < NBR)
        index = count;
    else
        index = oldindex;
    while (true)
    {
        std::cout << "Entry first name: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            std::exit(0);
        if (contacts[index].set_first_name(input))
            break ;
        std::cout << "Cannot be empty" << std::endl;
    }
    while(true)
    {
        std::cout << "Entry last name: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            std::exit(0);
        if (contacts[index].set_last_name(input))
            break ;
        std::cout << "Cannot be empty" << std::endl;
    }
    while (true)
    {
        std::cout << "Entry nick name: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            std::exit(0);
        if (contacts[index].set_nick_name(input))
            break;
        std::cout << "Cannot be empty" << std::endl;
    }
    while (true)
    {
        std::cout << "Entry phone nbr: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            std::exit(0);
        if (contacts[index].set_phone_nbr(input))
            break;
        std::cout << "Cannot be empty" << std::endl;
    }
    while (true)
    {
        std::cout << "Entry dark secret: " << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            std::exit(0);
        if (contacts[index].set_dark_secret(input))
            break;
        std::cout << "Cannot be empty" << std::endl;
    }
    if (count < NBR)
        count++;
    oldindex = (oldindex + 1) % NBR;
    std::cout << "Add contact success!" << std::endl;
}
void Phonebook::display_header() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nick name" << "|"
              << std::endl;
}
std::string    Phonebook::display_colonne(const std::string& str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + '.');
    return (str);
}
void Phonebook::display_contact() 
{
    display_header();
    for (int i(0); i < count; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|"
            << std::setw(10) << display_colonne(contacts[i].get_first_name()) << "|"
            << std::setw(10) << display_colonne(contacts[i].get_last_name()) << "|"
            << std::setw(10) << display_colonne(contacts[i].get_nick_name()) << "|"
            << std::endl;
    }
}
void Phonebook::search_contact()
{
    std::string input;
    int index;

    if (count == 0)
    {
        std::cout << "0 contacts, add first" << std::endl;
        return;
    }
    display_contact();
    while (true)
    {
        std::cout << "Entry the index" << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
            std::exit(0);
        std::stringstream ss(input);
        if (!(ss >> index) || index > count || index < 1 || !ss.eof())
        {
            std::cout << "Index invalid" << std::endl;
            continue;
        }
        break;
    }
    contacts[index - 1].display_info();
}