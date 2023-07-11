#include "ReplaceLine.hpp"

int main(int argc, char** argv)
{
	if (argc == 4)
	{
		ReplaceLine obj(argv[1]);
		obj.ReplaceTheString((std::string)argv[2], (std::string)argv[3]);
	}
	else
		std::cout << "Wrong argumnet" << std::endl;
	return 0;
}