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

	std::function<int(int)> result = [=](int second) {

		Sleep(second * 1000);

		if (s == 0 && num % 2 == 1) {
			return printf("��������̖ڂ�%d�Ȃ̂�\n����!!", num);
		}
		else if (s == 1 && num % 2 == 0) {
		    return printf("��������̖ڂ�%d�Ȃ̂�\n����!!", num);
		}
		else {
			return printf("��������̖ڂ�%d�Ȃ̂�\n�s����", num);
		}

	};

	printf("��Ȃ�0�����Ȃ�1����͂��悤\n");
	scanf_s("%d", &s);
	result(3);


	return 0;
}