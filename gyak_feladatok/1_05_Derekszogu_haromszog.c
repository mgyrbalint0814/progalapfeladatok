#include <stdio.h>
#include<math.h>

int main(){
    int a, b;
    double c;

    printf("A haromszog egyik befogoja: ");
    scanf("%d",&a);
    printf("A haromszog masik befogoja: ");
    scanf("%d",&b);

    c = sqrt(pow(a,2)+pow(b,2));

    printf("\nA haromszog atfogoja: %lf", c);
    return 0;
}