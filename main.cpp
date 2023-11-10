#include <stdio.h>
#include "Comparer.h"

int main() {

	Comparer<int, int> hikaku1(1, 2);
	Comparer<float, float> hikaku2(1.0f, 2.0f);
	Comparer<double, double> hikaku3(1.11, 2.22);
	Comparer<int, float> hikaku4(1, 2.0f);
	Comparer<int, double> hikaku5(1, 2.22);
	Comparer<float, double> hikaku6(1.0f, 2.22);

	// 結果を表示
	std::cout << "小さいほうは" << hikaku1.Min() << std::endl;
	std::cout << "小さいほうは" << hikaku2.Min() << std::endl;
	std::cout << "小さいほうは" << hikaku3.Min() << std::endl;
	std::cout << "小さいほうは" << hikaku4.Min() << std::endl;
	std::cout << "小さいほうは" << hikaku5.Min() << std::endl;
	std::cout << "小さいほうは" << hikaku6.Min() << std::endl;

}