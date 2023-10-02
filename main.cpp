#include <stdio.h>

int Recursive(int n1, int n2, int hour) {
	if (n1 < n2) {
		printf("‚ ‚ ‚ ‚ ");
		return (1);
	}
	else {
		hour += 1;

		if (hour >= 1) {
			n1 = (1072 * hour);
			n2 = (n2 * 2 - 50);
		} 

		return Recursive(n1, n2, hour);
	}

}

int main() {

	return 0;
}