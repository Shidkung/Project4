#include<stdio.h>
int main() {
	float x, y,sum,determine,divide,multi;
	scanf_s("%f %f",&x,&y);
	multi = x * y;
	determine = x - y;
	sum = x + y;
	divide = x / y;
	printf("%f\n",sum);
	printf("%f\n", determine);
	printf("%f\n", multi);
	printf("%f\n",divide);
return 0;
}