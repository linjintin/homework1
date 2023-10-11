#include<stdio.h>
#include<stdlib.h>
int a[3] = { 0 };

int main(void) {
	int i = 0,l, tmp,j;

	for (i = 0; i<=2; i++) {
		scanf("%d", &a[i]);
	}
	for (l = 3 - 1; l > 0; l--)
	{
		for (j = 0; j <= l - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	printf("maximu:%d\n", a[2]);
	printf("smallest:%d", a[0]);
}