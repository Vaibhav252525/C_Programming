#include <stdio.h>
void main()
{
    int Num1, Num2;
    printf("Enter value of Num1: ");
    scanf("%d", &Num1);
    printf("Enter value of Num2: ");
    scanf("%d", &Num2);
    Num1 = Num1 + Num2;
    Num2 = Num1 - Num2;
    Num1 = Num1 - Num2;
    printf("values after swapping two number are: %d\n%d\n", Num1, Num2);
}