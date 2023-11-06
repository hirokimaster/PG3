#include <stdio.h>

// 普通の給料
int salaryCalc(int salaryWage, int hour) {
	return salaryWage * hour;
}

// 再帰的な給料
int recursiveSalaryCalc(int recursiveWage) {
	return recursiveWage * 2 - 50;
}


// 給料をを計算して比較する
int CompareSalaries(int salary, int recursiveWage, int recursiveSalary, int hour) {

	// 再帰的な時給の給料が高くなったら終了
	if (salary < recursiveSalary) {
		return hour;
	}

	// 時間をカウント
	hour++;

	// 給料の計算
	if (hour >= 1) {
		salary = salaryCalc(1070, hour);

		if (hour >= 2) {
			recursiveWage = recursiveSalaryCalc(recursiveWage);
		}

		recursiveSalary = recursiveSalary + recursiveWage;
	}

	CompareSalaries(salary, recursiveWage, recursiveSalary, hour);
}

int main() {

	int salary = 0;
	int recursiveWage = 100;
	int recursiveSalary = 0;
	int hour = 0;
	
	// 結果を表示
	hour = CompareSalaries(salary, recursiveWage, recursiveSalary, hour);
	printf("%d時間で再帰的な時給の給料が超えた", hour);

	return 0;
}