#include<stdio.h>
void main(){
    int num1,num2,max;
    printf("Enter the number1 ");
    scanf("%d",&num1);
    printf("Enter the number2 ");
    scanf("%d",&num2);
    max=num1>num2? num1:num2;
    printf("Greater number is %d",max);
}