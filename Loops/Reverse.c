#include <stdio.h>
void main()
{
    int n,rev=0 ,lastdigit;
    printf("Enter a number which you want to reverse: ");
    scanf("%d", &n);
    while (n > 0)
    {
        lastdigit = n % 10;
        rev=(rev*10)+lastdigit;
        n = n / 10;
    }
        printf("%d", rev);   
}