#include <iostream>
#include <string>
#include <fstream>

void    replacefile(const std::string &filename, const std::string &s1,
                    const std::string &s2)
{
    std::string line;
    std::size_t pos;
    bool    find = false;

    // create and open the filename
    std::ifstream   read_file(filename.c_str()); //ifstram: class to read from the file
    if (!read_file.is_open())
    {   
        std::cerr << "Error: failed to open " << filename << std::endl;
        return ;
    }

    //create the filname.replace
    std::ofstream   output((filename +".replace").c_str()); // ofstream: class to write on file
    if (!output)
    {
        std::cerr << "Error: failed to create output file" << std::endl;
        read_file.close();
        return ;
    }

    while(std::getline(read_file, line))
    {
        pos = 0;
        while (true)
        {
            if (line.find(s1) != std::string::npos)
                find = true;
            pos = line.find(s1);
            if (pos == std::string::npos)
                break ;
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        output << line;
        if (!read_file.eof())
            output << "\n";
    }
    if (find == false)
            std::cerr << "Error: no s1 found in the file" << std::endl;
    read_file.close();
    output.close();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: nbr of parameters is wrong" << std::endl;
        return (1);
    }
    replacefile(av[1], av[2], av[3]);
    return (0);
}