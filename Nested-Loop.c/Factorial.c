#include <stdio.h>
void main()
{
    int i, j, fact = 1;
    for (i = 2; i <= 7; i++)
    {
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        printf("%d\n", fact);
        fact=1;
    }
}

