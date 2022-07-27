#include "classes.hpp"

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
	std::cout << new_contact.first_name << std::endl;
	std::cout << new_contact.last_name << std::endl;
	return (new_contact);
}

void	display_contacts(Contact new_contact)
{
	std::cout << "Display contacts" << std::endl;
	std::cout << new_contact.first_name << std::endl;
	std::cout << new_contact.last_name << std::endl;
	std::cout << new_contact.nickname << std::endl;
	std::cout << new_contact.phone_number << std::endl;
	std::cout << new_contact.darkest_secret << std::endl;
}

int	main()
{
	Contact		new_contact;
	PhoneBook	my_phonebook;
	std::string command;

	my_phonebook.contacts[0] = new_contact;
	while (1)
	{
		std::cin >> command;
		if (command == "ADD")
		{
			new_contact = add_new_contact();
			my_phonebook.contacts[0] = new_contact;
		}
		else if (command == "SEARCH")
			display_contacts(my_phonebook.contacts[0]);
		else if (command == "EXIT")
			return 0;
		else
			std::cout << "Unknown command" << std::endl;
	}
}