#include <stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    double t, t2, s;
    printf("A haromszog a oldala: ");
    scanf("%d",&a);
    printf("A haromszog b oldala: ");
    scanf("%d",&b);
    printf("A haromszog c oldala: ");
    scanf("%d",&c);
    
    s = (double)(a + b + c) / 2;
    t2 = s*(s-a)*(s-b)*(s-c);
    t = sqrt(t2);

    printf("\nA haromszog terulete: %.2f, kerulete: %d\n", t, a+b+c);
    return 0;
    }

