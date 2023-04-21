#include "Contact.hpp"
#include <iostream>

void sirunPrint(std::string str)
{
	if (str.length() <= 10)
	{
		for(size_t i = 0; str.length() < 10; i++)
			str = " " + str;
	}
	else
	{
		str = str.substr(0, 9) + ".";
	}
	std::cout << str << "|";
}

void Contact::printContactInfo(size_t n)
{
	std::cout << "         " << n << "|";
	sirunPrint(_firstName);
	sirunPrint(_lastName);
	sirunPrint(_nickName);
	std::cout << std::endl;
}