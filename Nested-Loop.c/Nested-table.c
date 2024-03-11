#include<stdio.h>
void main()
{
int result,i,j;
    for(i=6;i<=9;i++){
        for ( j = 1; j <=10; j++)
        {
            result=i*j;
            printf("%d\t",result);
        }    
        printf("\n");   
    }
}