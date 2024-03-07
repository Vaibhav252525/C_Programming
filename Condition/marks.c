#include <stdio.h>
void main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d", &marks);
    if (marks >= 75)
    {
        printf("grade A");
    }
    else
    {
        if (marks >= 60 && marks < 75)
        {
            printf("Grade B");
        }
        if (marks < 60 && marks > 40)
        {
            printf("Grade c");
        }
        else
        {
            printf("Grade F");
        }
    }
    }