#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;

    std::cout << "string adress: " << &str << std::endl;
    std::cout << "PTR adress: " << stringPTR << std::endl;
    std::cout << "REF adress: " << &stringREF << std::endl;

    std::cout << "Value string: " << str << std::endl;
    std::cout << "Value PTR: " << *stringPTR << std::endl;
    std::cout << "Value REF: " << stringREF << std::endl;
    return 0;
} 