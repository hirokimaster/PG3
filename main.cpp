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

	// ‚ ‚Á‚Ä‚é‚©‚Ç‚¤‚©”»’f‚·‚é
	std::function<int(int)> isCorrect = [=](int s) {

		Sleep(3000);

		if (s == 0 && num % 2 == 1) {
			printf("‚³‚¢‚±‚ë‚Ì–Ú‚Í%d‚È‚Ì‚Å\n³‰ğ!!", num);
		}
		else if (s == 1 && num % 2 == 0) {
		    printf("‚³‚¢‚±‚ë‚Ì–Ú‚Í%d‚È‚Ì‚Å\n³‰ğ!!", num);
		}
		else {
			printf("‚³‚¢‚±‚ë‚Ì–Ú‚Í%d‚È‚Ì‚Å\n•s³‰ğ", num);
		}

		return s;

	};

	

	printf("Šï”‚È‚ç0‹ô”‚È‚ç1‚ğ“ü—Í‚µ‚æ‚¤\n");
	scanf_s("%d", &s);
	isCorrect(s);


	return 0;
}