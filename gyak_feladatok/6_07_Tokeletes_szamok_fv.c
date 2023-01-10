#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int tokeletes(int szam);
int kisebboszto_osszeg(int szam);
int count(int x);
void int_beolvas(int* x);

int main()
{
    int num, count = 0;
    int_beolvas(&num);
    kisebboszto_osszeg(num);
    tokeletes(num);

    for (int i = 0; i < num; i++)
    {
        int num = tokeletes(i);
        if( num == 1)
        {
            count++;
        }
    }
    printf("Az intervallumon %d tokeletesszam van!", count);

    return 0;
}

int tokeletes(int szam) {
    if (szam==kisebboszto_osszeg(szam))
    {
        return 1;
    }
    
    return 0;
}

int kisebboszto_osszeg(int szam) {
    int osszeg = 0;
    for(int i = 1; i <= szam/2; i++)
    {
        if(szam % i == 0)
        {
            osszeg += i;
        }
    }

    return osszeg;
}

int count(int x) {
    int count = 0;
    for(int i = 1; i <= x; i++)
    {
       int num = tokeletes(i);
       if( num == 1)
       {
            count++;
       }
    }
    return count;
}

void int_beolvas(int* x) {
    bool ok;
    do
    {
        ok = true;
        printf("Adj meg egy szamot!\n");
        if(scanf("%d", x) != 1 || x <= 0)
        {
            printf("Invalid input!\n");
            ok = false;
            while(getchar() !='\n');
        }
        else if (*x <= 0)
        {
            printf("Invalid input!\n");
            ok = false;
            while(getchar() !='\n');
        }
        

    } while (!ok);
    
}