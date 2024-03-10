#include <stdio.h>
void main()
{
    int age;
    char ch;
    printf("enter the gender\n");
    scanf("%c", &ch);
    printf("enter the age");
    scanf("%d", &age);

    if (age <= 60)
    {
        if (ch == 'm')
        {
            printf("Interest rate 9.50 credited");
        }
        else  
        {
            printf("Interest rate 9.5 credited");
        }
    }
     else{
            printf("Interest rate 8.50 credited");
        }
}