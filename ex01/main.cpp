#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	// Contact contact1("Vahe", "Sargsyan", "vasargsy", "098040038", "CatLover");
	while (1)
	{
		std::cout << ">: ";
		std::string line;
		std::getline(std::cin, line);
		if (std::cin.eof())//???????
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