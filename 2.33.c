#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, c, d, e,t,r;
	printf("�@����`���{��:");
	scanf("%d", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf("%d", &b);
	printf("�����@����/�[�گ��p�X����:");
	scanf("%d", &c);
	printf("�@�Ѫ������O:");
	scanf("%d", &d);
	printf("�@�Ѫ��q��(�L���O):");
	scanf("%d", &e);
	r=a/c*b;
	t=r+ d + e;
	printf("�`��O%d��", t);
}