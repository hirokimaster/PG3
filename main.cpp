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

	// あってるかどうか判断する
	std::function<int(int)> isCorrect = [=](int s) {

		Sleep(3000);

		if (s == 0 && num % 2 == 1) {
			printf("さいころの目は%dなので\n正解!!", num);
		}
		else if (s == 1 && num % 2 == 0) {
		    printf("さいころの目は%dなので\n正解!!", num);
		}
		else {
			printf("さいころの目は%dなので\n不正解", num);
		}

		return s;

	};

	

	printf("奇数なら0偶数なら1を入力しよう\n");
	scanf_s("%d", &s);
	isCorrect(s);


	return 0;
}