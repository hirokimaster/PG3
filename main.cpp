#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void (*pFunc)(int*);

// コールバック関数
void correct(int* s) {
	printf("正解!!");
}

void inCorrect(int* s) {
	printf("残念不正解");
}

void setTimeout(pFunc p, int second) {
	Sleep(second * 1000);
	p(&second);
}

int main() {

	int Time = time(nullptr);
	srand(Time);
	int num = rand();
	int s;


	printf("奇数なら0偶数なら1を入力しよう\n");
	scanf_s("%d", &s);

	if (s == 0 && num % 2 == 1) {
		pFunc p;
		p = correct;
		setTimeout(p, 3);

	}
	else if (s == 1 && num % 2 == 0) {
		pFunc p;
		p = correct;
		setTimeout(p, 3);
	}
	else {
		pFunc p;
		p = inCorrect;
		setTimeout(p, 3);
	}

	
	return 0;
}