#include<stdio.h>
void main()
{
    int i,j,count=0;
    for ( i = 1; i <=100; i++)
    {
        count=0;
    
    for ( j = 2; j < i/2; j++)
    {
        if (i%j==0)
        {
            count=1;
            break;
        }
    }
    if (count!=1)
    {
        printf("\t%d",i);
    }
          
    } 
    printf("\n");
}