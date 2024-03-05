#include <stdio.h>
int main()
{
    float Num1, Num2, Add, Mul, Div, Sub;
    printf("Enter Value of Num1\n ");
    scanf("%f", &Num1);
    printf("Enter Value of Num2\n ");
    scanf("%f", &Num2);
    Add = Num1 + Num2;
    Mul = Num1 * Num2;
    Div = Num1 / Num2;
    Sub = Num1 - Num2;
    printf("Addition is %f\n Multiplication is %f\n Division is %f\n Substraction is %f\n", Add, Mul, Div, Sub);
}