#include "ReplaceLine.hpp"

void ReplaceLine::replaceStrings(std::string& line, size_t position, const std::string& lineReplace)
{
	std::string str = line.substr(0, position);
	str += lineReplace;
	str += line.substr(position + lineReplace.length(), line.length());
	line = str;
}

void ReplaceLine::ReplaceTheString(const std::string& search, const std::string& replace)
{
    if (!_sourceFile) {
        std::cerr << "Error opening source file." << std::endl;
        return;
    }
    if (!_destinationFile) {
        std::cerr << "Error opening destination file." << std::endl;
        return;
    }

	std::string line;
	if (std::getline(_sourceFile, line, '\0')) {
		size_t pos = line.find(search);
        while (pos != std::string::npos) {
            replaceStrings(line, pos, replace);
			pos = line.find(search, pos + replace.length());
        }
        _destinationFile << line << std::endl;
    }
	else {
		std::cout << "File with provided name is empty !." << std::endl;
		return ;
	}

    std::cout << "File copied successfully." << std::endl;
}

ReplaceLine::~ReplaceLine() {
	_sourceFile.close();
	_destinationFile.close();
}

ReplaceLine::ReplaceLine(const std::string fileName) : _sourceFile(fileName), _destinationFile(fileName + ".replace") { }