#include <iostream>

// 普通の給料
int SalaryCalc(int salaryWage, int hour) {
	return salaryWage * hour;
}

// 再帰的な時給を求める関数
int RecursiveSalaryCalc(int wage, int hour) {
	
	if (hour == 1) {
		return wage; // 最初の時給
	}
	else {
		return RecursiveSalaryCalc(wage, hour - 1) * 2 - 50;
	}
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

	int salaryWage = 1072;
	int normalSalary = 0;
	int startWage = 100;
	int recursiveWage = 0;
	int recursiveSalary = 0;
	int higherSalary = 0;
	int hour = 0;
	
	while (hour < 10){
		++hour;
		normalSalary = SalaryCalc(salaryWage, hour);  // 普通の給料
		recursiveWage = RecursiveSalaryCalc(startWage, hour); // 再帰的な時給を出す
		recursiveSalary += recursiveWage; // 再帰的な給料

		std::cout << "普通の給料 = " << normalSalary << "  再帰的な給料 = " << recursiveSalary << "  再帰的な時給 = "  << recursiveWage << std::endl;

		// 比較して大きい方を入れる
		higherSalary = CompareSalaries(normalSalary, recursiveSalary);

		// 再帰的な時給の給料が大きくなったら抜ける
		if (higherSalary == recursiveSalary) {
			std::cout << "再帰的な給料が高くなるのは" << hour << "時間" << std::endl;
			break;
		}
	}

	return 0;
}