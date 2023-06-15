#include <iostream>

int main()
{
	std::string zombie = "HI THIS IS BRAIN";
	std::string *stringPTR = &zombie;
	std::string &stringREF = zombie;

	std::cout << "The memory address of the string variable\t\"" << &zombie << "\""<< std::endl;
	std::cout << "The memory address held by stringPTR\t\t\"" << stringPTR << "\""<< std::endl;
	std::cout << "The memory address held by stringREF\t\t\"" << &stringREF << "\""<< std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable\t" << zombie << std::endl;
	std::cout << "The value pointed to by stringPTR\t" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF\t" << stringREF << std::endl;
}