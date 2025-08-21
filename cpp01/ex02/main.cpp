#include <iostream>
#include <string>

int main(void)
{
    std::string original = "HI THIS IS BRAIN";
    std::string*    strPTR = &original;
    std::string&    strREF = original;

    std::cout << "Adress of original: " << &original << std::endl;
    std::cout << "Adress of PTR: " << strPTR << std::endl;
    std::cout << "Adresse of REF: " << &strREF << std::endl;

    std::cout << "Value of original: " << original << std::endl;
    std::cout << "Value of PTR: " << *strPTR << std::endl;
    std::cout << "Value of REF: " << strREF << std::endl;
    return (0);
}
