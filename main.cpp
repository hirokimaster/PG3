#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void (*pFunc)(int*, int*, int*);

// �R�[���o�b�N�֐�
void isCorrect(int* s, int* num, int* input) {
	if (*input == 0 && *num % 2 == 1) {
		printf("��������̖ڂ�%d�Ȃ̂�\n����!!", *num);

	}
	else if (*input == 1 && *num % 2 == 0) {
		printf("��������̖ڂ�%d�Ȃ̂�\n����!!", *num);
	}
	else {
		printf("��������̖ڂ�%d�Ȃ̂�\n�s����", *num);

	}
	
}

void setTimeout(pFunc p, int second,int num, int input) {
	Sleep(second * 1000);
	p(&second, &num, &input);
	
}

int main() {

	int Time = time(nullptr);
	srand(Time);
	int num = rand();
	num = num % 6 + 1;
	int s; // ���͗p

	printf("��Ȃ�0�����Ȃ�1����͂��悤\n");
	scanf_s("%d", &s);

	pFunc p;
	p = isCorrect;
	setTimeout(p, 3,num, s);

	return 0;
}