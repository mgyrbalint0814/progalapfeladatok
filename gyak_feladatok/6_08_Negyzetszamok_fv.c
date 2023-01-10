#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void int_beolvas(int* x);
int negyzetszam_e(int szam);
int count(int N);

int main() {
    int N, i;
    int_beolvas(&N);
    printf("%d", count(N));

    return 0;
}

int negyzetszam_e(int szam) 
{
   int i;
    for(i=1; i<=szam; i++) 
    {
        if(szam%i==0) 
        {
            if(i*i==szam) 
            {
                return 1;
            }
        }
    }
    return 0;
}

int count(int N) 
{
    int i, db;
    for (i = 1; i <= N; i++)
    {
        if(negyzetszam_e(i) == 1)
        {
            db++;
        }
    }
    return db;
}

void int_beolvas(int* x) 
{
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