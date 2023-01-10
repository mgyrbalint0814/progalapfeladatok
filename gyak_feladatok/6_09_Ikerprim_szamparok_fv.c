#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


void int_beolvas(int* x);
int prim_e(int szam);
int ikerprim_e(int a, int b);
int count(int n);

int main() {
    int szam, a, b, n;
    int_beolvas(&szam);
    ikerprim_e(a,b);
    count(n);
    return 0;
}

int prim_e(int szam) {
    if(szam == 1)
    {
        return 0;
    }

    for(int i = 2; i < szam; i++)
    {
        if(szam % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int ikerprim_e(int a, int b) {
    for(int i = 0; i < b; i++)
    {
        if(prim_e(i) && prim_e(i + 2))
        {            
            printf("{%d, %d}\n", i, i + 2);
            i = i + 1; 
        }                
    }    
}

void int_beolvas(int* x) {
    bool ok;
    do
    {
        ok = true;
        printf("Adj meg egy szamot!\n");
        if (scanf("%d", x) != 1)
        {
            printf("Invalid input");
            ok = false;
            while(getchar() !='\n');
        }
        
    } while (!ok);
    
}

int count(int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(ikerprim_e == 1)
        count++;
    }
    return count;
}