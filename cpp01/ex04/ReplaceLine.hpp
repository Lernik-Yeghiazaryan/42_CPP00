#include <iostream>
#include <fstream>

#ifndef REPALCELINE_HPP
#define REPALCELINE_HPP

class ReplaceLine
{
public:
	ReplaceLine(const std::string);
	~ReplaceLine();
public:
	void ReplaceTheString(const std::string& search, const std::string& replace);
private:
	void replaceStrings(std::string& line, size_t position, const std::string& lineReplace);
private:
	std::ifstream _sourceFile;
	std::ofstream _destinationFile;
};

#endif