#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <Windows.h>

typedef void (*pFunc)(int*, int*);

// 合っているか
void isCorrect(int* num, int* input) {
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

// 三秒後に表示する
void setTimeout(pFunc p,int num, int input) {
	Sleep(3000);
	p( &num, &input);
	
}

int main() {

	// 乱数生成
	std::random_device seed;
	std::mt19937 randomEngine(seed());
	std::uniform_int_distribution<int> saikoro(1, 6); // サイコロ

	int input; // 入力用

	printf("奇数なら0偶数なら1を入力しよう\n");
	scanf_s("%d", &input);

	pFunc p;
	p = isCorrect;
	setTimeout(p, saikoro(randomEngine), input);

	return 0;
}