#include<stdio.h>
void main(){
    int num,EO;
    printf("Enter the number1");
    scanf("%d",&num);
    EO=(num%2==0)?printf("%d is Even number",num):printf("%d is Odd number",num);

}