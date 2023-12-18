#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*> yamanoteline;
	std::list<const char*>::iterator itr;
	int age = 0;
	yamanoteline = { "Tokyo", "Yurakucho", "Shimbashi", "Hamamatucho", "Tamachi", "Shinagawa", "Osaki", "Gotanda",
		"Meguro", "Ebisu", "Shibuya", "Harajuku", "Yoyogi", "Shinjuku", "Shin-Okubo", "Takadanobaba", "Mejiro", "Ikebukuro", "Otsuka",
		"Sugamo", "Komagome", "Tabata", "Nippori", "Uguisudani", "Ueno", "Okachimachi", "Akihabara", "Kanda"
	};

	// 1970年
	if (age == 0) {
		std::cout << "1970年" << std::endl;
		for (itr = yamanoteline.begin(); itr != yamanoteline.end(); ++itr) {
			std::cout << *itr << std::endl;
		}
		std::cout << std::endl;
		age = 1;
	}
	// 2019年
	if (age == 1) {
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
		age = 2;
	}
	// 2022年
	if (age == 2) {
		std::cout << "2022年" << std::endl;
		for (itr = yamanoteline.begin(); itr != yamanoteline.end(); ++itr) {
			if (*itr == "Shinagawa") {
				itr = yamanoteline.insert(itr, "Takanawa Gateway");
				std::cout << *itr << std::endl;
				++itr;
			}
			std::cout << *itr << std::endl;
		}
	}
	
	return 0;

}