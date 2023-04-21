#include <string>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phone;
	std::string _secret;

public:
	void setFirstName(std::string str)
	{
		_firstName = str;
	}	
	void setLastName(std::string str)
	{
		_lastName = str;
	}	
	void setNickName(std::string str)
	{
		_nickName = str;
	}	
	void setPhone(std::string str)
	{
		_phone = str;
	}	
	void setSecret(std::string str)
	{
		_secret = str;
	}	
	Contact(std::string fName, std::string lName, std::string nName, std::string phone, std::string secret)
	{
		_firstName = fName;
		_lastName = lName;
		_nickName = nName;
		this->_phone = phone;
		this->_secret = secret;
	}
	Contact()
	{
		_firstName = "";
		_lastName = "";
		_nickName = "";
		_phone = "";
		_secret = "";
	}
	void printContactInfo(size_t n);

};

#endif