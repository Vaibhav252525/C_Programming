#include <stdio.h>
void main()
{
    char c;
    int count =1;

        while(count<=5){
            printf("Enter the character:\n ");
            scanf("%c",&c);
                if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
                {
                    printf("its Vovel ");
                }
                else
                {
                    printf("it is consonant\n ");
                }
                count++;
        }
}
