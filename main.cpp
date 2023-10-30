#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void (*pFunc)(int*, int*, int*);

int Random(int time, int num) {
	srand(time);
    num = rand();
	num = num % 6 + 1;
	return num;
}

// コールバック関数
void isCorrect(int* s, int* num, int* input) {
	if (*input == 0 && *num % 2 == 1) {
		printf("さいころの目は%dなので\n正解!!", *num);

	}
	else if (*input == 1 && *num % 2 == 0) {
		printf("さいころの目は%dなので\n正解!!", *num);
	}
	else {
		printf("さいころの目は%dなので\n不正解", *num);

	}
	
}

void setTimeout(pFunc p, int second,int num, int input) {
	Sleep(second * 1000);
	p(&second, &num, &input);
	
}

int main() {

	int Time = time(nullptr); // 時間
	int saikoro = 0; // サイコロ
	saikoro = Random(Time, saikoro);
	int input; // 入力用

	printf("奇数なら0偶数なら1を入力しよう\n");
	scanf_s("%d", &input);

	pFunc p;
	p = isCorrect;
	setTimeout(p, 3,saikoro, input);

	return 0;
}