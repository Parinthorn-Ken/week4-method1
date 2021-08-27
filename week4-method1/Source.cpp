#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a, b, c;
	printf("Enter three number : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int sum1, sum2, sum3;
	sum1 = a + b; //30
	sum2 = a + c; //50
	sum3 = b + c; //40
	int min, max;
	if (sum1 < sum2) {
		min = sum1; //30
		max = sum2; //50
	if (sum3 < min) {
			printf("The highest is %d + %d = %d  ", a, c, max);
		}
		else if (sum3 > max) {
			max = sum3;
			printf("The highest is %d + %d = %d  ", b, c, max);
		}
		else if (sum3 = max) {
			printf("The highest is %d + %d = %d  ", a, c, max);
		}
	}
	else if (sum1 > sum2) {
		max = sum1;
		min = sum2;
		if (sum3 < min) {
			printf("The highest is %d + %d = %d  ", a, b, max);
		}
		else if (sum3 > max) {
			max = sum3;
			printf("The highest is %d + %d = %d  ", b, c, max);
		}
		else if (sum3 = max) {
			printf("The highest is %d + %d = %d \n ", a, b, max);
		}
	}
	else if (sum1 = sum2) {
		min = sum1;
		max = sum2;
		if (sum3 < min) {
			printf("The highest is %d + %d = %d \n ", a, b, max);
		}
		else if (sum3 > max) {
			printf("The highest is %d + %d = %d  ", b, c, sum3);
		}
		else if (sum3 = max) {
			printf("The highest is %d + %d = %d  ", a, b, min);


		}


	}
	return 0;

}