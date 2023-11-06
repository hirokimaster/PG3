#include <stdio.h>
#include <Windows.h>
#include "Bird.h"
#include "Suzume.h"
#include "Hato.h"

int main() {


	Bird* bird[2];

	// 生成
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			bird[i] = new Suzume;
		}
		else {
			bird[i] = new Hato;
		}
	}

	// 鳩と雀がが鳴いている
	for (int i = 0; i < 2; i++) {
		bird[i]->BirdSing();
	}
	
	// 破棄
	for (int i = 0; i < 2; i++) {
		delete bird[i];
	}

	return 0;

}