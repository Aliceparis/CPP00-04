#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class   Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        Brain&  operator=(const Brain& other);
        ~Brain();

        /*membre fonction*/
        void    set_idee(int index, const std::string& idee);
        std::string get_idee(int index);
};



#endif 