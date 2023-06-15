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
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setPhone(std::string str);
	void setSecret(std::string str);

	Contact(std::string fName, std::string lName, std::string nName, std::string phone, std::string secret);
	Contact();
	
	void printContactInfo(size_t n);
};

#endif