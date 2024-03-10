// #include<stdio.h>
// void main()
// {
//     int n,i,r;
//     r=n;
//     printf("Enter Original Number ");
//     scanf("%d",&n);
//     for ( i = 0; i <= n; i++)
//     {
//         r=n%10;
//         printf("%d",r);
//         n=n/10;
//     }
//     if (n==r)
//     {
//         printf("Number is as same as original number");
//     }
//     else{
//         printf("Number is not as same as original number");
//     }
    
    
// }

#include<stdio.h>
#include<conio.h>
int main()
{
    int num, orig, rev=0, rem;
    printf("Enter a Number: ");
    scanf("%d", &num);
    orig = num;
    while(num>0)
    {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    if(orig==rev)
        printf("\nThis number is equal to its Reverse");
    else
        printf("\nThis number is not equal to its Reverse");
    getch();
    return 0;
}