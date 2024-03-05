#include <stdio.h>
void main()
{
    int num1, num2, temp=0;
    printf("Enter value of num1");
    scanf("%d", &num1);
    printf("Enter value of num2");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("values after swapping two number are: %d%d\n", num1, num2);
}