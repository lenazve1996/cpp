#include <iostream>
#include <fstream>

int main(int ac, char **av) {

    std::ifstream file ("main.cpp");
    if (file)
    {
        file.seekg(0, file.end);
        int len = file.tellg();
        file.seekg(0 , file.beg);

        char    *content = new char [len];
        file.read(content, len);
        std::string str = content;
        std::string s1 = "include";
        int s1_len = s1.length();
        size_t  index = 0;
        while (1)
        {
            std::size_t where = str.find(s1, index);
            if (where == std::string::npos)
                break ;
            std::cout << str.substr(index, where - index);
            std::cout << "kek";
            index = where + s1_len;
        }
        std::cout << str.substr(index, str.length() - index);
    }
}