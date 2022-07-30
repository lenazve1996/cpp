#include "PhoneBook.hpp"

Contact	add_new_contact()
{
	Contact new_contact;

	std::cout << "Input your first name" << std::endl;
	std::cin >> new_contact.first_name;
	std::cout << "Input your last name" << std::endl;
	std::cin >> new_contact.last_name;
	std::cout << "Input your nickname" << std::endl;
	std::cin >> new_contact.nickname;
	std::cout << "Input your phone number" << std::endl;
	std::cin >> new_contact.phone_number;
	std::cout << "Input your darkest secret" << std::endl;
	std::cin >> new_contact.darkest_secret;
	std::cout << "NEW CONTACT ADDED" << std::endl;
	return (new_contact);
}
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

void	display_contact(PhoneBook my_phonebook)
{
	char	*input;
	int		index;
	char	*endpoint;

	std::cin >> input;
	index = strtol(input, &endpoint, 10);
	if (*endpoint)
	{
		std::cout << "Input the number from 1 to 8" << std::endl;
	}
	else if (index < 1 || index > 8)
	{
		std::cout << "Input the number from 1 to 8" << std::endl;
	}
	else
	{
		output_column_names();
		output_table_settings();
		std::cout << --index;
		output_table_settings();
		if (my_phonebook.contacts[index].first_name.size() > 9)
		{
			my_phonebook.contacts[index].first_name.replace(9, 1, ".");
			my_phonebook.contacts[index].first_name.resize(10);
		}
		std::cout << my_phonebook.contacts[index].first_name;
		output_table_settings();
		std::cout << my_phonebook.contacts[index].last_name;
		output_table_settings();
		std::cout << my_phonebook.contacts[index].nickname << "|" << std::endl;
	}
}

int	main()
{
	Contact		new_contact;
	PhoneBook	my_phonebook;
	std::string command;
	int			index;

	while (true)
	{
		std::cin >> command;
		if (command == "ADD")
		{
			if (index == 8)
				index = 0;
			new_contact = add_new_contact();
			my_phonebook.contacts[index] = new_contact;
			++index;
		}
		else if (command == "SEARCH")
			display_contact(my_phonebook);
		else if (command == "EXIT")
			return 0;
		else
			std::cout << "Unknown command" << std::endl;
	}
}