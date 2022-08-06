#include "PhoneBook.hpp"

void PhoneBook::addContact(Contact contact, int index)
{
    contacts[index] = contact;
}

Contact	PhoneBook::getContact(int index)
{
    return (contacts[index]);
}