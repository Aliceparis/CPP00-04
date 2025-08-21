#include "phonebook.hpp"

int main(void)
{
    std::string input;
    Phonebook   book;

    while (true)
    {
        std::cout << "Entry the commande: ADD, SEARCH or EXIT" << std::endl;
        if (!std::getline(std::cin, input) || std::cin.eof())
        {
            std::cout << "Entry one commande" << std::endl;
            break;
        }
        if (input == "ADD")
            book.add_contact();
        else if (input == "SEARCH")
            book.search_contact();
        else if (input == "EXIT")
            break ;
        else
            std::cout << "Error: unkown commande" << std::endl;
    }
    return (0);
}