#include "Contact.hpp"
#include <iostream>

void Contact::setFirstName(std::string str)
{
	_firstName = str;
}	
void Contact::setLastName(std::string str)
{
	_lastName = str;
}	
void Contact::setNickName(std::string str)
{
	_nickName = str;
}	
void Contact::setPhone(std::string str)
{
	_phone = str;
}	
void Contact::setSecret(std::string str)
{
	_secret = str;
}

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

Contact::Contact(std::string fName, std::string lName, std::string nName, std::string phone, std::string secret)
{
	_firstName = fName;
	_lastName = lName;
	_nickName = nName;
	this->_phone = phone;
	this->_secret = secret;
}
Contact::Contact()
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phone = "";
	_secret = "";
}