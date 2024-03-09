#include <stdio.h>
void main()
{
    int n,lastdigit;
    printf("Enter a number which you want to reverse: ");
    scanf("%d", &n);
    while (n > 0)
    {
        lastdigit = n % 10;
        printf("%d", lastdigit); 
        n = n / 10;
    }
}