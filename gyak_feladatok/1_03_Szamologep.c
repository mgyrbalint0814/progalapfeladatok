#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Add meg a szam erteket:");
    scanf("%d",&a);
    printf("Add meg b szam erteket:");
    scanf("%d",&b);

    printf("\nOsszeg:%d", a+b);
    printf("\nKulonbseg:%d", a-b);
    printf("\nSzorzat:%d", a*b);
    printf("\nHanyados:%d", a/b);
    return 0;
}