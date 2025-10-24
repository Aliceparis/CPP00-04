#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"
#define NBR 2


class   Phonebook
{
    private:
        Contact contacts[NBR];
        int count;
        int oldindex;

    public:
        Phonebook();
        ~Phonebook();

        void    add_contact();
        void    search_contact();
        void    display_header() const;
        std::string display_colonne(const std::string& str);
        void    display_contact();
};


#endif