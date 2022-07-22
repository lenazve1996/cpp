#include <iostream>
#include <string>

int     main(int ac, char **av)
{
	char	c;

    if (ac == 1) 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } 
    else 
    {
        int str_numb = 1;
        while (str_numb != ac) {
            int char_numb = 0;
            while (av[str_numb][char_numb]) {
                c = toupper(av[str_numb][char_numb]);
                std::cout << c;
                char_numb++;
            }
            str_numb++;
        }
        std::cout << std::endl;
    }
    return 0;
}