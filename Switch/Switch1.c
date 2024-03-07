#include<stdio.h>
void main(){
int a,b,add,sub,mul,ch;
printf("1.Addition\n 2.Substraction\n 3.Multiplication\n");
printf("Enter the Number ");
scanf("%d",&a);
printf("Enter the Number ");
scanf("%d",&b);

printf("Enter the choice ");
scanf("%d",&ch);
switch (ch)
{
case 1:
add=a+b;
printf("addition= %d",add);
break;
case 2:
sub=a-b;
printf("substraction= %d",sub);
break;
case 3:
mul=a*b;
printf("multiplication=%d",mul);
break;

default:
printf("Enter valid choice");
    break;
}

}