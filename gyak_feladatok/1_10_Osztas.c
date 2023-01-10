#include<stdio.h>

int main()
{
    int a,b,e;

    printf("Adja meg az a-t:");
    scanf("%d",&a);
    printf("Adja meg a b-t:");
    scanf("%d",&b);

    e = a % b;
    printf("maradek:%d\n", e);
    e = a / b;
    printf("osztas:%d\n", e);

    return 0;
}