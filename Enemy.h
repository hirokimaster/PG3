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
	void Approach(); // �ߐ�
	void Attack();	 // �ˌ�
	void Leave();	 // ���E

private:
	// �t�F�[�Y
	Phase phase_ = Phase::Approach;
	// �����o�֐��|�C���^�̃e�[�u��
	static void(Enemy::* phaseFuncTable[])();

};