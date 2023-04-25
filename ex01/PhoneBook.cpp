#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::ADD()
{
	std::string line;
	std::cout << "Adding new contact\n";
	
	std::cout << "First name >: ";
	std::getline(std::cin, line);
	if (line == "")
		return;
	contacts[ContactsCount].setFirstName(line);
	std::cout << "Last name >: ";
	std::getline(std::cin, line);
	if (line == "")
		return;
	contacts[ContactsCount].setLastName(line);
	std::cout << "Nick name >: ";
	std::getline(std::cin, line);
	if (line == "")
		return;
	contacts[ContactsCount].setNickName(line);
	



	std::cout << "Phone >: ";
	while (1)
	{
		std::getline(std::cin, line);
		if (line == "")
			return;
		else if ()
		contacts[ContactsCount].setPhone(line);
	}
	
	
	
	
	std::cout << "Secret >: ";
	std::getline(std::cin, line);
	if (line == "")
		return;
	contacts[ContactsCount].setSecret(line);
	if (ContactsCount < 7)
		++ContactsCount;
	std::cout << "Contact added\n";
}

void PhoneBook::SEARCH()
{
	for (size_t i = 0; i < ContactsCount; i++)
	{
		contacts[i].printContactInfo(i);
	}
	std::cout << "Search contact, write the contact's index\nIndex >: ";
	std::string s;
	getline(std::cin, s);
	if (ContactsCount == 0 && s != "")
	{
		std::cout << "Phonebook is empty -_-\n";
		return;
	}
	else if (s >= "0" && s <= "7")
	{
		size_t num = std::atoi(s.c_str());
		if (num < ContactsCount)
			contacts[num].printContactInfo(num);
		else
			std::cout << "There's no contact with index " << num << std::endl;
	}
	else
		std::cout << "Incorrect index\n";

}

void PhoneBook::EXIT()
{
	exit(0);
}

PhoneBook::PhoneBook()
{
	ContactsCount = 0;
}