#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a = 1;
	do {
		float loan, rate,i;
		int day;
		printf("Enter loan principal(-1 to end):");
		scanf("%f", &loan);
		if (loan == -1) {
			break;
		}
		printf("Enter interest rate:");
		scanf("%f", &rate);
		printf("Enter term of loan in days:");
		scanf("%d", &day);
		i=loan*rate*day / 365;
		printf("The interest charge is %.2f\n", i);
	} while (a == 1);
}