#include <stdio.h>

int Recursive(int n1, int n2,int n3, int hour) {
	if (n1 < n3) {

		printf("%d���ԂōċA�I�̂ق��������𒴂���", hour);
		return (1);
	}
	else {
		hour += 1;
		n3 = 100;

		if (hour >= 1) {
			n1 = (1072 * hour);
			n3 = n2;
			n2 = (n2 * 2 - 50);
		} 

		printf("[%d���Ԗڂ̎���]\n", hour);
		printf("���ʂ̎���%d\n", n1);
		printf("�ċA�I�Ȏ���%d\n", n3);

		return Recursive(n1, n2, n3, hour);
	}

}

int main() {

	int num = 1072;
	int num2 = 100;
	int num3 = 0;
	int time = 0;

	Recursive(num, num2,num3, time);


	return 0;
}