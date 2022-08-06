#ifndef CONTACT_H
# define CONTACT_H
#include <string>
#include <iostream> 
#include <iomanip>
#include <stdlib.h>

class Contact {

public:
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickName(std::string str);
	void	setPhoneNumber(std::string str);
	void	setDarkestSecret(std::string str);
	std::string	getFirstName();
    std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif