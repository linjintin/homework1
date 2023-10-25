#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {
	int a = 1;
	do {
		int h,o;
		float r,d,D;
		printf("Enter # of hours worked(-1 to end):");
		scanf("%d",&h);
		if (h == -1) {
			break;
		}
		else {
			if (h <= 40) {
				printf("Enter hourly rate of the worker:");
				scanf("%f", &r);
				d = r * h;
				printf("Salary is $%.2f\n", d);
			}
			else {
				printf("Enter hourly rate of the worker:");
				scanf("%f", &r);
				o=h - 40;
				D=h * r +o*0.5*r ;
				printf("Salary is $%.2f\n", D);
			}
		}
	} while (a==1);
}