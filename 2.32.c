#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float i,j,bmi;
	printf("input:(weightinkilogram) (heightinmeters)");
	scanf("%f %f", &i, &j);
	bmi = i / (j * j);
	printf("BMI VALUES:%.1f\n",bmi);
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
}