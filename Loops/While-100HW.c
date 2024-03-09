// #include<stdio.h>
// void main()
// {
//     int counter=0;
//     while (counter<=100)
//     {
//         printf("HELLO\n");
//         counter++;
//     }

// }

#include <stdio.h>
void main()

{
    int i, n;
    printf("Enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
        }
    }
}