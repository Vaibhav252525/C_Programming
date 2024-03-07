#include<stdio.h>
void main(){
    int marks;
    printf("Enter the marks");
    scanf("%d",&marks);
    if (marks>=75)
    {
        printf("Grade  A");
    }
    else if(marks>=60){
        printf("Grade  B");

    }
    else if(marks>=40){
        printf("Grade C");
    }
    else{
        printf("You are fail");
    }
    
}