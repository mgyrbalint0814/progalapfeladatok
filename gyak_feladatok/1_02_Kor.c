#include <stdio.h>

int main(){
    int r;
    double k, t, pi = 3.14;
    
    printf("Adja meg a kor sugarat: ");
    scanf("%d", &r);
    
    t = r*r*pi;
    k = 2*pi*r;

    printf("\nA kor terulete: %f\n", t);
    printf("A kor kerulete: %f", k);
    
    return 0;
    }