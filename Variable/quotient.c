#include <stdio.h>
void main()
{
    double Num1, Num2,r,q;
    printf("Enter value of num1:");
    scanf("%lf", &Num1);
    printf("Enter value of num2:");
    scanf("%lf", &Num2);
    r = Num1 % Num2;
    q = Num1 / Num2;
    printf("quotient of two Number is %lf\n ", r);
    printf("Remender of two number is %lf ", q);
}