#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <stdio.h>

int main() {
	int n, i, j;

	// �W�b�������p�ۧΪ�
	for (i = 1; i <= 9; i += 2) {
		for (j = 0; j < (9 - i) / 2; j++) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// �U�b�������p�ۧΪ�
	for (i = 9 - 2; i >= 1; i -= 2) {
		for (j = 0; j < (9 - i) / 2; j++) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}