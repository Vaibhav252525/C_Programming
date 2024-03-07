#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if (number>=1 && number<=100)
    {
        printf("The number is within the range");
    }
    else{
         printf("The number is not within the range");

    }
    
}
