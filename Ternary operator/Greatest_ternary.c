#include<stdio.h>
void main(){
    int num1,num2,num3,EO;
    printf("Enter the number1 ");
    scanf("%d",&num1);
    printf("Enter the number2 ");
    scanf("%d",&num2);
    printf("Enter the number3 ");
    scanf("%d",&num3);
    EO= (num1>num2)? (num1>num3 ? num1:num3):(num2>num3?num2:num3);
    printf("Gretest number among three number is%d",EO);

}