#include "classes.hpp"

void	add_new_contact(Contact new_contact)
{
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
}

void	display_contacts(Contact new_contact)
{
	std::cout << "Display contacts" << std::endl;
}

int	main()
{
	Contact new_contact;
	std::string command;

	while (1)
	{
		std::cin >> command;
		if (command == "ADD")
			add_new_contact(new_contact);
		else if (command == "SEARCH")
			display_contacts(new_contact);
		else if (command == "EXIT")
			return 0;
	}
}