#include <stdio.h>
void main()
{
    int Sp, Cp, profit, loss;
    printf("Enter the selling price and cost price ");
    scanf("%d%d", &Sp, &Cp);
    if (Sp > Cp)
    {
        profit = Sp - Cp;
        printf("Your profit is= %d", profit);
    }
    else
    {
        loss = Cp - Sp;
        printf("Your loss is= %d", loss);
    }
}