#include<stdio.h>
void main()
{
	float a, b, add,mul,div,sub;
	printf("Enter the Number of a:");
	scanf("%f", &a);
	printf("Enter the Number of b:");
	scanf("%f", &b);
	add = a + b;
	mul = a * b;
	div = a / b;
	sub = a - b;
	printf(" addition =%f\n multiplication =%f \n division =%f \n substraction =%f \n", add, mul, div, sub);

}