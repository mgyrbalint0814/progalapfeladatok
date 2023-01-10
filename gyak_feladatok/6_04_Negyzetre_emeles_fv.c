#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void int_beolvas(int* szam);
int negyzetre_emeles(int szam);

int main()
{
    int szam;
    int negyzet;
    int_beolvas(&szam);
    negyzet = negyzetre_emeles(szam);
    printf("%d negyzete %d.", szam,negyzet);
}

void int_beolvas(int* szam) 
{
    bool ok;
    int i;

    ok = true;
    do
    {
        printf("Adj meg egy szamot: ");
        if (scanf("%d", szam) != 1)
        {
            printf("Invalid input!");
            ok = false;
            while(getchar() !='\n');
        }
        
    } while (!ok);
}

int negyzetre_emeles(int szam) 
{
    return szam*szam;
}

