#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, c, d, e,t,r;
	printf("一整天總里程數:");
	scanf("%d", &a);
	printf("汽油一公升/加侖多少錢:");
	scanf("%d", &b);
	printf("平均一公升/加侖能行駛幾公里:");
	scanf("%d", &c);
	printf("一天的停車費:");
	scanf("%d", &d);
	printf("一天的通行(過路費):");
	scanf("%d", &e);
	r=a/c*b;
	t=r+ d + e;
	printf("總花費%d元", t);
}