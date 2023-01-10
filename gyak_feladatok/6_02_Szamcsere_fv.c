#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void szamcsere(int *a, int *b);

int main() {
    int a, b;
    bool ok;
    do
    {
        ok = true;
        printf("Adj meg 2 szamot:");
        if (scanf("%d,%d", &a,&b) != 1)
        {
            printf("Invalid input!");
            ok = false;
            while(getchar() !='\n');
        }
        
    } while (!ok);

    szamcsere(&a,&b);
    printf("A szamcsere utan a = %d, b = %d", a, b);
    return 0;
}

void szamcsere(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}