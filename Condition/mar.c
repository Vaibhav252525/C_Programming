#include <stdio.h>
void main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d", &marks);
    if (marks >= 75)
    {
        if (marks <= 60)
        {
            printf("grade B");
        }
        else
        {
            printf("grade A");
        }
    }
    else
    if (marks >= 40)
    {
        printf("grade C");
    }
    else
    {
        printf("grade F");
    }
}
