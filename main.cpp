#include <stdio.h>

int SalaryCalc(int n1, int n2,int n3, int n4, int hour) {
	if (n1 < n4) {

		printf("%d時間で再帰的のほうが給料を超えた", hour);
		return (1);
	}
	else {
		hour += 1;
		n3 = 100;

		if (hour >= 1) {
			n1 = (1072 * hour);
			n3 = n2;
			n2 = (n2 * 2 - 50);
			n4 = n4 + n3;
		} 

		printf("[%d時間目の時給]\n", hour);
		printf("普通の時給の時の給料 = %d\n", n1);
		printf("再帰的な時給の時の給料 = %d\n", n4);
		
		return SalaryCalc(n1, n2, n3, n4, hour);
	}

}

int main() {

	int num = 1072;
	int num2 = 100;
	int num3 = 0;
	int num4 = 0;
	int time = 0;

	SalaryCalc(num, num2, num3, num4, time);


	return 0;
}