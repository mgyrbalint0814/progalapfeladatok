#include <stdio.h>

int main(){
    int a, b, tmp;
    printf("Adj meg ket szamot:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    
    tmp = a;
    a = b;
    b = tmp;
    
    printf("\nCsere utan a = %d, b = %d\n", a, b);
    return 0;
}