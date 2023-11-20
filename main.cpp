#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <functional>
#include <Windows.h>

// setTimeout関数
void setTimeout(std::function<int(int)> func,int input, int second) {
	 Sleep(1000 * second);
	 func(input);
}

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
	setTimeout(isCorrect, input, 3);

	return 0;
}