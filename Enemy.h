#pragma once
#include <stdio.h>
#include <Windows.h>

enum class Phase {
	Approach,
	Attack,
	Leave
};

class Enemy {
public:

	void Update();
	void Approach(); // 近接
	void Attack();	 // 射撃
	void Leave();	 // 離脱

private:
	// フェーズ
	Phase phase_ = Phase::Approach;
	// メンバ関数ポインタのテーブル
	static void(Enemy::* phaseFuncTable[])();

};