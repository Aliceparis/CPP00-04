#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class   Harl
{
    private:
        void    debug() const;
        void    info() const;
        void    warning() const;
        void    error() const;
    public:
        Harl();
        ~Harl();
        void    harlFilter(const std::string& level);
};



#endif