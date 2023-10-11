#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int i, j;
	scanf("%d %d", &i, &j);
	if (i%j == 0) {
		printf("%d is %d's multiple",i,j);
	}
	else {
		printf("%d is not %d's multiple",i,j);
	}
}