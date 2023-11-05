#include <stdio.h>


// 給料をを計算して比較する
int CompareSalaries(int salary, int recursiveWage, int recursiveSalary, int hour) {

	// 再帰的な時給の給料が高くなったら終了
	if (salary < recursiveSalary) {

		printf("%d時間で再帰的のほうが給料を超えた", hour);
		return (1);
	}

	hour++;

	// 給料の計算
	if (hour >= 1) {
		salary = (1072 * hour);

		if (hour >= 2) {
			recursiveWage = (recursiveWage * 2 - 50);
		}

		recursiveSalary = recursiveSalary + recursiveWage;
	}
	
	// 結果を表示
	printf("[%d時間目の時給]\n", hour);
	printf("普通の時給の時の給料 %d\n", salary);
	printf("再帰的な時給の時の給料 %d\n", recursiveSalary);
		
	CompareSalaries(salary, recursiveWage, recursiveSalary, hour);

}

int main() {

	int salary = 0;
	int recursiveWage = 100;
	int recursiveSalary = 0;
	int hour = 0;

	CompareSalaries(salary, recursiveWage, recursiveSalary, hour);


	return 0;
}