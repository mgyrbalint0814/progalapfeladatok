#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void int_beolvas(int* x);
int baratsagos(int a, int b);
int kisebboszto_osszeg(int szam);

int main()
{
    int alsohatar, felsohatar, i, j;
    int_beolvas(&alsohatar);
    do 
    {
        int_beolvas(&felsohatar);
    } while (felsohatar < alsohatar);

    for (i=alsohatar; i<=felsohatar; i++)
    {
        for (j=i+1;j<=felsohatar;j++) 
        {
            if (baratsagos(i, j)==1)
            printf("(%d,%d)\n", i, j);
        }
    }   
    
    return 0;
}

void int_beolvas(int* x) 
{
    bool ok;

    do
    {
        ok = true;
        if (scanf("%d", x) != 1)
        {
            printf("Invalid input!");
            ok = false;
            while(getchar() !='\n');
        }
    } while (!ok);
    return ;

}

int baratsagos(int a, int b) 
{
    if (a==kisebboszto_osszeg(b) && b==kisebboszto_osszeg(a)) 
    return 1;
    return 0;


}

int kisebboszto_osszeg(int szam) 
{
    int osszeg, oszto;
    osszeg = 0;
    for (oszto = 1; oszto < szam/2; oszto+=1)
    {
        if (szam%oszto == 0)
        osszeg += oszto;
    }
    return osszeg;
}