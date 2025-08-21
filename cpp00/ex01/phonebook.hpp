#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define NB_CONTACT 2
# include "contact.hpp"
# include <sstream>
# include <iomanip>

class   Phonebook
{
    private:
        Contact contacts[NB_CONTACT];
        int count;
        int oldindex;
    public:
        Phonebook();
        ~Phonebook();
        void    add_contact();
        void    search_contact();
        void    display();
        void    display_header();
        void    display_all_contact();
        std::string display_colonne(std::string str);

};

#endif