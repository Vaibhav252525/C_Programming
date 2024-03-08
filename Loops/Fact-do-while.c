#include <stdio.h>
void main()
{
    int i=1, n, fact = 1;
    printf("Enter the number ");
    scanf("%d", &n);
    // printf("Enter the number ");
    // scanf("%d",&ans);
    do
    {
        fact = fact * i;
        i++;
    }
    while (i<=n);
    {
        printf("%d\n", fact);
        
    }
    
}