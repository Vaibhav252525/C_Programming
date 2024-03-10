#include <stdio.h>
void main()
{
    int num, OGNum, r, result = 0;
    printf("Enter a number ");
    scanf("%d", &num);
    OGNum = num;

    while (OGNum != 0)
    {
        r = OGNum % 10;
        result += r * r * r;
        OGNum= OGNum /10;
    }
    if (result == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
}
