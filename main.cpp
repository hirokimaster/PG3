#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include <Windows.h>

int main() {

	int Time = time(nullptr);
	srand(Time);
	int num = rand();
	num = num % 6 + 1;
	int s; 

	// �����Ă邩�ǂ������f����
	std::function<int(int)> isCorrect = [=](int s) {

		Sleep(3000);

		if (s == 0 && num % 2 == 1) {
			printf("��������̖ڂ�%d�Ȃ̂�\n����!!", num);
		}
		else if (s == 1 && num % 2 == 0) {
		    printf("��������̖ڂ�%d�Ȃ̂�\n����!!", num);
		}
		else {
			printf("��������̖ڂ�%d�Ȃ̂�\n�s����", num);
		}

		return s;

	};

	

	printf("��Ȃ�0�����Ȃ�1����͂��悤\n");
	scanf_s("%d", &s);
	isCorrect(s);


	return 0;
}