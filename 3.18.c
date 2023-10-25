#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float d, s,a=0;

	do {
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &d);
		if (d == -1) {
			break;
		}
		s = d * 9 / 100 + 200;
		printf("Salary is:%.2f\n", s);
	} while (a != 1);
}