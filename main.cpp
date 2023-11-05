#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <functional>
#include <Windows.h>

int main() {

	// 乱数生成
	std::random_device seed;
	std::mt19937 randomEngine(seed());
	std::uniform_int_distribution<int> dice(1, 6); // サイコロ
	int input; // 入力用
	int diceResult;	 // サイコロの結果
	diceResult = dice(randomEngine);

	// あってるかどうか判断する
	std::function<int(int)> isCorrect = [=](int input) {

		
		Sleep(3000);

		if (input == 0 && diceResult % 2 == 1) {
			printf("さいころの目は%dなので\n正解!!", diceResult);
		}
		else if (input == 1 && diceResult % 2 == 0) {
		    printf("さいころの目は%dなので\n正解!!", diceResult);
		}
		else {
			printf("さいころの目は%dなので\n不正解", diceResult);
		}

		return input;

	};

	

	printf("奇数なら0偶数なら1を入力しよう\n");
	scanf_s("%d", &input);
	isCorrect(input);


	return 0;
}