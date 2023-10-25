#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a = 1;
	do {
		int a;
		float b, charge, credit, limit, nb;
		printf("Enter account number(-1 to end):");
		scanf("%d", &a);
		if (a == -1) {
			break;
		}
		printf("Enter beginning balance:");
		scanf("%f", &b);
		printf("Enter total charges:");
		scanf("%f", &charge);
		printf("Enter total credits:");
		scanf("%f", &credit);
		printf("Enter credit limit:");
		scanf("%f", &limit);
		nb = b + charge - credit;
		if (nb > limit) {
			printf("Credit Limit Exceeded");
			printf("Account:%d\n", a);
			printf("Credit limit:%.2f\n", limit);
			printf("Balance:%.2f\n", nb);
		}
	} while (a!=0);
}