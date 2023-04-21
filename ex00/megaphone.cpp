#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		for (size_t i = 0; argv[1][i]; i++)
		{
			std::cout << (char)(std::toupper(argv[1][i]));
		}
		std::cout << std::endl;
	}
}