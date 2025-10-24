#include <iostream>
#include <string>
#include <fstream>

void    replace_file(const std::string& filename, const std::string& s1, const std::string& s2)
{
    if (s1.empty())
    {
        std::cout << "Error: string s1 is empty" << std::endl;
        return ;
    }
    std::ifstream   read_file(filename.c_str());
    if (!read_file.is_open())
    {
        std::cout << "Error: failed to open the file" << std::endl;
        return ;
    }
    std::ofstream   write_file((filename + ".replace").c_str());
    if (!write_file.is_open())
    {
        std::cout << "Error: failed to write on the file" << std::endl;
        return ;
    }
    std::string line;
    size_t  pos;
    bool    find = false;
    while(std::getline(read_file, line))
    {
        pos = 0;
        while(true)
        {
            if (line.find(s1) != std::string::npos)
                find = true;
            pos = line.find(s1);
            if (line.find(s1) == std::string::npos)
                break ;
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        write_file << line;
        if (!read_file.eof())
            write_file << "\n";
    }
    if (find == false)
        std::cout << "Error: s1 is not found in the file" << std::endl;
    read_file.close();
    write_file.close();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: nbr of argument invalide" << std::endl;
        return 1;
    }
    replace_file(av[1], av[2], av[3]);
    return (0);
}

/*
引用必须引用一个有效的对象，一个对象被init过的，
std::string s = "hello";
std::string& ref_s = s; // 合法：ref_s 绑定到 s
// std::string& ref_s2; // 非法：没有初始化，编译器报错
ref_s2没有init过，所以这个refernce是invalide

而对于一个string，需要检查string是否为空，及时他是空的，也是一个有效的对象
“null string” vs. “empty string”：在 C++ 中，我们通常不说 std::string 是 "null" 的，而是说它是 空的（empty）。一个空的 std::string 仍然是一个有效的、完整的对象，只是它的内部数据（字符序列）为空。

    std::string s = ""; 这是一个内容为空的字符串对象。

    std::string* ptr_s = nullptr; 这是一个空指针，它不指向任何 std::string 对象。
所以av【2】是空的“”情况下，依旧会传递到replace——file中，因此要对此做检查
*/