#include "Enemy.h"

void Enemy::Update(){
	
	// ���݃t�F�[�Y�̊֐������s
	(this->*phaseFuncTable[static_cast<size_t>(phase_)])();
	Sleep(2000);
	phase_ = Phase::Attack;
	(this->*phaseFuncTable[static_cast<size_t>(phase_)])();
	Sleep(2000);
	phase_ = Phase::Leave;
	(this->*phaseFuncTable[static_cast<size_t>(phase_)])();
	
}

// �ߐ�
void Enemy::Approach(){
	printf("���͋ߐڃt�F�[�Y�B2�b��Ɏˌ��Ɉڂ�\n");
}

// �ˌ�
void Enemy::Attack(){
	printf("���͎ˌ��t�F�[�Y�B2�b��ɗ��E����\n");
}

// ���E
void Enemy::Leave(){
	printf("���E����");
}

// �t�F�[�Y�̊֐��e�[�u��
void (Enemy::* Enemy::phaseFuncTable[])() {
	&Enemy::Approach,
	& Enemy::Attack,
	& Enemy::Leave
};
