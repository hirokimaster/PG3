﻿#include <stdio.h>
#include <iostream>

template <typename Type>
Type Min(Type a, Type b) {
	if (a < b) {
		return static_cast<Type>(a);
	}
	else {
		return static_cast<Type>(b);
	}
}

// charの時
template <>
char Min<char>(char a, char b) {
	return printf("数字以外は代入できません");
}


int main() {


	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(1.4, 2.4));
	printf("%c\n", Min<char>(1, 2));

	return 0;
}