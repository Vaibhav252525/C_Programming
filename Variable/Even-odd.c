#include <stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d", &a);

    if (a%2 == 0)
        printf("The number is even");
    else
    {
        printf("The number is Odd");
    }
}