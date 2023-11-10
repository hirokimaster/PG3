#pragma once
#include <iostream>

template <typename Type1, typename Type2>

class Comparer{
public:

	Type1 number1;
	Type2 number2;

	// コンストラクタ
	Comparer(Type1 number1, Type2 number2) : number1(number1), number2(number2) {}

	// 比較して小さいほうを返す関数
	Type1 Min() {
		if (number1 < number2) {
			return static_cast<Type1>(number1);
		}

		return static_cast<Type2>(number2);
	}
	
};

