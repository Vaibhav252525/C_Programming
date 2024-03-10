#include <stdio.h>
void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c", &c);
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        printf("its Vovel ");
    }
    else
    {
        printf("%c  is consonant\n ");
    }
}
