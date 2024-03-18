// #include<stdio.h>
// void main()
// {
//     int i=1;
//     while (i<=10)
//     {
//         printf("%d\n",i);
//         i++;
//     }

// }

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {
        i++;
        printf("%d\n", i);
    }
}
