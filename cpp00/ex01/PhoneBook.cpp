#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

bool hasOnlyAlphabets(const std::string& str) {
    for (std::size_t i = 0; i < str.length(); ++i) {
        if (!std::isalpha(str[i])) {
            return false;
        }
    }
    return true;
}

bool hasOnlyDigits(const std::string& str) {
    for (std::size_t i = 0; i < str.length(); ++i) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

void addNames(Contact contacts[8], size_t count, std::string name)
{
	std::string line;
	while (1)
	{
		std::cout << name << " name >: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			return ;
		if (hasOnlyAlphabets(line) && line.length() != 0)
		{
			if (line.at(0) >= 'A' && line.at(0) <= 'Z')
			{
				if (name == "First")
					contacts[count].setFirstName(line);
				else
					contacts[count].setLastName(line);
				break;
			}
			else 
				std::cout << "The first letter must be an uppercase letter\n";
		}
		else
			std::cout << "The name must be written in letters\n";

	}
}

void addFields(Contact contacts[8], size_t count, std::string name)
{
	std::string line;
	while (1)
	{
		std::cout << name << " >: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			return ;
		if (line.length() != 0)
		{
			if (name == "Nick name")
				contacts[count].setNickName(line);
			else if (name == "Secret")
				contacts[count].setSecret(line);
			else if (hasOnlyDigits(line))
				contacts[count].setPhone(line);
			else
			{
				std::cout << "Phone must be numeric (-_-)\n";
				continue;
			}
			break;
		}
	}
}

void PhoneBook::ADD()
{
	std::string line;
	std::cout << "Adding new contact\n";
	addNames(contacts, ContactsCount, "First");
	addNames(contacts, ContactsCount, "Last");
	addFields(contacts, ContactsCount, "Nick name");
	addFields(contacts, ContactsCount, "Phone");
	addFields(contacts, ContactsCount, "Secret");
	if (ContactsCount < 7)
		++ContactsCount;
	std::cout << "Contact added\n";
}

void PhoneBook::SEARCH()
{
	for (size_t i = 0; i <= ContactsCount; i++)
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
		if (num <= ContactsCount)
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