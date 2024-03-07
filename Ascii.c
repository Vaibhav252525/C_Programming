#include <stdio.h>
void main()
{
    // printf("%c%d",(char)(int,a));
    int no;
    printf("enter the number");
    scanf("%d,&no");
    if (no >= 48 && no <= 57)
    {
        printf("the entered number is digit");
    }
    else
    {
        printf("other number");
    }
}