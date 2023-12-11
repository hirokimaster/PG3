#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*> yamanoteline;
	std::list<const char*>::iterator itr;
	int age = 0;
	yamanoteline = { "tokyo", "yurakucho", "shimbashi", "hamamatucho", "tamachi", "shinagawa", "osaki", "gotanda",
		"meguro", "ebisu", "shibuya", "harajuku", "yoyogi", "shinjuku", "shin-okubo", "takadanobaba", "mejiro", "ikebukuro", "otsuka",
		"sugamo", "komagome", "tabata", "nippori", "uguisudani", "ueno", "okachimachi", "akihabara", "kanda"
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
			if (*itr == "nippori") {
				itr = yamanoteline.insert(itr, "nishi-nippori");
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
			if (*itr == "shinagawa") {
				itr = yamanoteline.insert(itr, "takanawaGateway");
				std::cout << *itr << std::endl;
				++itr;
			}
			std::cout << *itr << std::endl;
		}
	}
	
	return 0;

}