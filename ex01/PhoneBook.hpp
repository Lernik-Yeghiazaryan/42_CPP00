#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	size_t ContactsCount;

public:
	void ADD();
	void SEARCH();
	void EXIT();

	PhoneBook()
	{
		ContactsCount = 0;
	}
};

#endif