#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b,c;

printf("Adja meg az a-t:");
scanf("%d",&a);
printf("Adja meg a b-t:");
scanf("%d",&b);
printf("Adja meg a c-t:");
scanf("%d",&c);

printf("\nFelszin:%d", 2 * (a*b + a*c + b*c));
printf("\nTerfogat:%d",a*b*c);

return 0;
}