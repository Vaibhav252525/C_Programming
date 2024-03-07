#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the choice ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'M':
        printf("Monday");
        break;
    case 'T':
        printf("Tuesday");
        break;
    case 'W':
        printf("Wednesday");
        break;

    default:
        printf("Enter valid choice");
        break;
    }
}