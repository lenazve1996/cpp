#include <iostream>
#include <fstream>

int findFileLen( char *fileName )
{
    std::ifstream file (fileName);

    if (file.is_open())
    {
        file.seekg(0, file.end);
        int len = file.tellg();
        file.seekg(0 , file.beg);
        file.close();
        return (len);
    }
    else
    {
        std::cerr << "error: failed to open a file" << std::endl;
        exit (1);
    }
}

std::string readFile( int fileLen, char *fileName )
{
    std::ifstream file (fileName);

    char *buff = new char [fileLen];
    file.read(buff, fileLen);
    file.close();
    std::string content = buff;
    delete [] buff;
    return (content);
}

std::string nameNewFile( char *inputFile )
{
    std::string inFile = inputFile;
    std::string outFile = inFile.append(".replace");
    return (outFile);
}

void    replaceOutputContent( std::string content, char **av )
{
    std::string searchStr = av[2];
    std::string replacement = av[3];
    int         searchStrLen = searchStr.length();
    size_t      index = 0;

    std::string outFile = nameNewFile(av[1]);
    std::ofstream ofs(outFile);
    while (true)
    {
        std::size_t occurance = content.find(searchStr, index);
        if (occurance == std::string::npos)
            break ;
        ofs << content.substr(index, occurance - index);
        ofs << replacement;
        index = occurance + searchStrLen;
    }
    ofs << content.substr(index, content.length() - index);
    ofs.close();
}

int main( int ac, char **av )
{
    if (ac != 4)
    {
        std::cerr << "error: wrong number of arguments" << std::endl;
    }
    else if (av[2][0] == '\0')
    {
        std::cerr << "error:str1 is empty" << std::endl;
    }
    else
    {
        int fileLen = findFileLen( av[1] );
        std::string content = readFile( fileLen, av[1] );
        replaceOutputContent( content, av );
    }
    return (0);
}