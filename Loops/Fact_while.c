#include <stdio.h>
void main()
{
    int i=1, n, fact=1;
    printf("Enter the number ");
    scanf("%d", &n);
    // printf("Enter the number ");
    // scanf("%d",&ans);
    while ( i <= n)
    {
        fact = fact * i;
        i++;
    }
        printf("%d\n", fact);
}