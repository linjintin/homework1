#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int limit = 500;

	for (int a = 1; a <= limit; a++) {
		for (int b = a; b <= limit; b++) {
			double c = sqrt(a * a + b * b);
			if (c == (int)c && c <= limit) {
				printf("%d, %d, %d\n", a, b, (int)c);
			}
		}
	}
	return 0;
}