#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int i;
	scanf("%d", &i);
	if (i % 2 == 0) {
		printf("%d is even", i);
	}
	else{
		printf("%d is odd", i);
	}
}