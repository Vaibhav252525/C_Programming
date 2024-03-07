#include<stdio.h>
void main()
{
    const float pi=3.14;
    float r,area;
    printf("Enter the radius:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area of circle is: %f",area);
}