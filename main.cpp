#include <stdio.h>

// 普通の給料
int SalaryCalc(int salaryWage, int hour) {
	return salaryWage * hour;
}

// 再帰的な給料
int RecursiveSalaryCalc(int wage, int hour) {
	
	if (hour >= 2) {
		wage = wage * 2 - 50;
	}

	wage * 2 - 50;

	return RecursiveSalaryCalc(wage, hour);
}

// 給料を比較して大きいほうを返す関数
int CompareSalaries(int salary1, int salary2) {
	if (salary1 < salary2) {
		return salary2;
	}
	else {
		return salary1;
	}
}

int main() {

	int salary = 0;
	int recursiveWage = 100;
	int recursiveSalary = 0;
	int hour = 0;
	int a = 0;
	
	while (hour < 15){
		++hour;
		recursiveSalary = RecursiveSalaryCalc(recursiveWage, hour);

		printf("%d\n", recursiveSalary);
	}

	

	return 0;
}