#include<stdio.h>
void main(){
    int i=1,n,table;
    printf("Enter the number");
    scanf("%d", &n);
    do{
        table = n * i;
        printf("%d*%d=%d\n", n, i, table);
        i++;

    }
    while (i<=10);
}