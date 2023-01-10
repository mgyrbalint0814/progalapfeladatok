#include<stdio.h>
#include<math.h>

int main () {
   double a;

   printf("Add meg az a szam erteket:");
   scanf("%d",&a);

   printf("Legkozelebbi nagyobb = %.1lf\n", ceil(a));
   printf("Legkozelebbi kisebb = %.1lf", floor(a));
   
   return(0);
}