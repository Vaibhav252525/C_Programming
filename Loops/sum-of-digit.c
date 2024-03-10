#include <stdio.h>
void main()
{
    int i = 1, num, sum = 0;
    printf("Enter the number");
    scanf("%d", &num);
    while (num > 0)
    {
        i = num % 10;
        sum = sum + i;
        num = num / 10;
    }
    printf("%d", sum);
}