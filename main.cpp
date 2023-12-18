#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*> yamanoteline;
	std::list<const char*>::iterator itr;

	yamanoteline = { "Tokyo", "Yurakucho", "Shimbashi", "Hamamatucho", "Tamachi", "Shinagawa", "Osaki", "Gotanda",
		"Meguro", "Ebisu", "Shibuya", "Harajuku", "Yoyogi", "Shinjuku", "Shin-Okubo", "Takadanobaba", "Mejiro", "Ikebukuro", "Otsuka",
		"Sugamo", "Komagome", "Tabata", "Nippori", "Uguisudani", "Ueno", "Okachimachi", "Akihabara", "Kanda"
	};

	// 1970年
	std::cout << "1970年" << std::endl;
	for (itr = yamanoteline.begin(); itr != yamanoteline.end(); ++itr) {
		std::cout << *itr << std::endl;
	}
	std::cout << std::endl;

	// 2019年
	std::cout << "2019年" << std::endl;
	for (itr = yamanoteline.begin(); itr != yamanoteline.end(); ++itr) {
		if (*itr == "Nippori") {
			itr = yamanoteline.insert(itr, "Nishi-Nippori");
			std::cout << *itr << std::endl;
			++itr;
		}
		std::cout << *itr << std::endl;
	}
	std::cout << std::endl;

	// 2022年
	std::cout << "2022年" << std::endl;
	for (itr = yamanoteline.begin(); itr != yamanoteline.end(); ++itr) {
		if (*itr == "Shinagawa") {
			itr = yamanoteline.insert(itr, "Takanawa Gateway");
			std::cout << *itr << std::endl;
			++itr;
		}
		std::cout << *itr << std::endl;
	}

	return 0;

}