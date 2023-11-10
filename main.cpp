#include <stdio.h>
#include "Enemy.h"

int main() {
	
	Enemy* enemy = new Enemy();
	// 敵が離脱するまでループ
	while (!enemy->GetIsLeave()) {
		enemy->Update();
	}

	delete enemy;

	return 0;
}