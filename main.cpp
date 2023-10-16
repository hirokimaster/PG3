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

// char‚Ì
template <>
char Min<char>(char a, char b) {

	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return 0;

}

int main() {

	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(1.4, 2.4));
	Min<char>('a', 'b');

	return 0;

}