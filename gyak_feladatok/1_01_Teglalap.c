#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b;

printf("Adja meg az a-t:");
scanf("%d",&a);
printf("Adja meg a b-t:");
scanf("%d",&b);

printf("Kerulet:%d\n", 2*(a + b));
printf("Terulet:%d",a*b);

return 0;
}