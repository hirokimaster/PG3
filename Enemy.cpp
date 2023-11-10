#include "Enemy.h"

void Enemy::Update(){
	
	// 現在フェーズの関数を実行
	(this->*phaseFuncTable[static_cast<size_t>(phase_)])();
	
}

// 近接
void Enemy::Approach(){
	printf("今は近接フェーズ。2秒後に射撃に移る\n");
	Sleep(2000);
	phase_ = Phase::Attack;
}

// 射撃
void Enemy::Attack(){
	printf("今は射撃フェーズ。2秒後に離脱する\n");
	Sleep(2000);
	phase_ = Phase::Leave;
}

// 離脱
void Enemy::Leave(){
	printf("離脱した");
	isLeave_ = true;
}

// フェーズの関数テーブル
void (Enemy::* Enemy::phaseFuncTable[])() {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Leave
};
