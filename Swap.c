#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Value after swaping a and b:%d\n%d\n",a,b);
}