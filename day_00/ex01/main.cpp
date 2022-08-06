#include "PhoneBook.hpp"

Contact	create_new_contact()
{
	Contact new_contact;
	std::string input;

	std::cout << "Input your first name" << std::endl;
	std::cin >> input;
	new_contact.setFirstName(input);
	std::cout << "Input your last name" << std::endl;
	std::cin >> input;
	new_contact.setLastName(input);
	std::cout << "Input your nickname" << std::endl;
	std::cin >> input;
	new_contact.setNickName(input);
	std::cout << "Input your phone number" << std::endl;
	std::cin >> input;
	new_contact.setPhoneNumber(input);
	std::cout << "Input your darkest secret" << std::endl;
	std::cin >> input;
	new_contact.setDarkestSecret(input);
	std::cout << "NEW CONTACT ADDED" << std::endl << std::endl;;
	return (new_contact);
}

int	get_index()
{
	int index = -1;

	while (index < 1 || index > 8)
	{
		std::cout << "Input the index of contact from 1 to 8" << std::endl << std::endl;
		std::cin >> index;
	}
	return (index);
}

void	PhoneBook::search()
{
	int			index;

	this->print_phonebook();
	index = get_index() - 1;
	this->print_one_contact(index);
}

int	main()
{
	Contact		new_contact;
	PhoneBook	ph_book;
	std::string command;
	int			index;

	index = 0;
	while (true)
	{
		std::cout << "Input the command (ADD, SEARCH or EXIT)" << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			if (index == 8)
				index = 0;
			
			new_contact = create_new_contact();
			ph_book.addContact(new_contact, index);
			++index;
		}
		else if (command == "SEARCH")
			ph_book.search();
		else if (command == "EXIT")
			return 0;
		else
			std::cout << "Unknown command" << std::endl;
	}
}