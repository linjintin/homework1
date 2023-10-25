#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int L, B,i,j,k;
	printf("input length and breadth:");
	scanf("%d %d",&L,&B);
	for (i = 1; i <= L; i++) {
		if (i == 1 || i == L) {
			for (j = 1; j <= B;j++) {
				printf("+");
			}
		}
		else {
			for (k = 1; k <= B; k++) {
				if (k == 1 || k == B) {
					printf("+");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
