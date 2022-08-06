#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"

class PhoneBook {

public:
	void 	addContact(Contact contact, int index);
	Contact	getContact(int index);
	void	search(PhoneBook ph_book);
	void	print_phonebook();
	void	search();
	void	print_one_contact(int index);

private:
	Contact	contacts[8];

};

#endif