#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

int main() {

	std::ifstream txtFile;
	txtFile.open("PG3_05_02.ascii");
	std::vector<std::string> readFileData;
	std::vector<std::string>::iterator itr;
	std::string str;
	
	while (std::getline(txtFile, str , ',')) {
		readFileData.push_back(str);
	}

	txtFile.close();


	
	for (itr = readFileData.begin(); itr != readFileData.end(); ++itr) {
		std::cout << *itr << std::endl;
	}


	return 0;
	
}