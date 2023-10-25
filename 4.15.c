#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {
	int i;
    double  k=0.1,t;
	for (i = 1; i <= 5; i++) {
		t=5000* pow(1 + k, 15);
		k = k+0.005;
		printf("%lf\n", t);
	}
	
}