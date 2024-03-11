#include<stdio.h>
void main()
{
    int i,low,upper;
    printf("Enter a lower value");
    scanf("%d",&low);
    printf("Enter a upper value");
    scanf("%d",&upper);
    for(i=low;i<=upper;i=i+2)
    {
        printf("%d\n",i);
    }
}