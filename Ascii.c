// #include <stdio.h>
// int main() {  
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);  
    
//     // %d displays the integer value of a character
//     // %c displays the actual character
//     printf("ASCII value of %c = %d", c,c);
//     return 0;
// }

#include <stdio.h>  
int main()  
{     
    int caps;  
 
    for ( caps = 65; caps < 91; caps++)  
    {  
        printf (" \n The ASCII value of %c is %d ", caps, caps);  
    }  
    return 0;  
}  
