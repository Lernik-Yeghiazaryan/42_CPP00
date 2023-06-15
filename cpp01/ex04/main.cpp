#include <iostream>
#include <fstream>

void copyFile(const std::string& sourceFile, const std::string& destinationFile, std::string& search, std::string& replace) {
    std::ifstream inputFile(sourceFile.c_str());
	std::ofstream outputFile(destinationFile.c_str());

    if (!inputFile) {
        std::cerr << "Error opening source file." << std::endl;
        return;
    }
    if (!outputFile) {
        std::cerr << "Error opening destination file." << std::endl;
        return;
    }

	std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = line.find(search);
        while (pos != std::string::npos) {
            line.replace(pos, search.length(), replace);
            pos = line.find(search, pos + replace.length());
        }

        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();

    std::cout << "File copied successfully." << std::endl;
}

int main(int argc, char** argv) {
	if (argc == 4) {
		std::string sourceFile = argv[1];
		std::string destinationFile = (std::string)argv[1] + ".replace";
		std::string search = (std::string)argv[2];
		std::string replace = (std::string)argv[3];
		copyFile(sourceFile, destinationFile, search, replace);
	}
	else
		std::cout << "Wrong count of arguments" << std::endl;

    return 0;
}
