#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	std::cout << "Input function name which you want to use\n";
	while (1)
	{
		std::cout << ">: ";
		std::string line;
		std::getline(std::cin, line);
		if (std::cin.eof())
			break;
		else if (line == "ADD")
			book.ADD();
		else if (line == "SEARCH")
			book.SEARCH();
		else if (line == "EXIT")
			book.EXIT();
	}
	return 0;
}