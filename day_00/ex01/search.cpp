#include "PhoneBook.hpp"

void	output_table_settings()
{
	std::cout << "|";
	std::cout << std::setw (10);
}
void	output_column_names()
{
	output_table_settings();
	std::cout << "index";
	output_table_settings();
	std::cout << "first_name";
	output_table_settings();
	std::cout << "last_name";
	output_table_settings();
	std::cout << "nickname" << "|" << std::endl;
}

std::string	resize_attributes(std::string str)
{
	if (str.size() > 9)
	{
		str.replace(9, 1, ".");
		str.resize(10);
	}
	return (str);
}

void	PhoneBook::print_phonebook()
{
	int index;
	std::string f_name;
	std::string l_name;
	std::string n_name;

	output_column_names();
	index = 1;
	while (index < 9)
	{
		output_table_settings();
		std::cout << index--;
		f_name = resize_attributes(this->getContact(index).getFirstName());
		l_name = resize_attributes(this->getContact(index).getLastName());
		n_name = resize_attributes(this->getContact(index).getNickName());
		output_table_settings();
		std::cout << f_name;
		output_table_settings();
		std::cout << l_name;
		output_table_settings();
		std::cout << n_name << "|" << std::endl;
		index += 2;
	}
	std::cout << std::endl;
}

void	PhoneBook::print_one_contact(int index)
{
	std::cout << "First name: ";
	std::cout << this->getContact(index).getFirstName() << std::endl;
	std::cout << "Last name: ";
	std::cout << this->getContact(index).getLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->getContact(index).getNickName() << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->getContact(index).getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->getContact(index).getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

// void	PhoneBook::search()
// {
// 	int			index;

// 	this->print_phonebook();
// 	index = get_index() - 1;
// 	this->print_one_contact(index);
// }