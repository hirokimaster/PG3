#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::ifstream file;
	file.open("PG3_05_02.txt", std::ios::in);
	std::vector<std::string> readFile;
	std::string str;
	while (std::getline(file, str)) {
		std::cout << readFile << std::endl;
	}

	return 0;
	
}