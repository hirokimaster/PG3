#include <stdio.h>
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

	printf("数字以外は代入できません");
	return 0;

}

int main() {

	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(1.4, 2.4));
	Min<char>('a', 'b');

	return 0;

}