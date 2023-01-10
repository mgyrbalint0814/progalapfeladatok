#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void beolvas(int* a, int* b);
int hatvanyozas(int szam, int hatvany);

int main()
{
    int szam, hatvany;
    int kitevo = 0;
    beolvas(&szam, &hatvany);
    hatvanyozas(szam, hatvany);
    kitevo = hatvanyozas(szam, hatvany);
    printf("%d a %d-iken = %d",szam,hatvany, hatvanyozas(szam,hatvany));
}

void beolvas(int* a, int* b) 
{
    bool ok;
    int i, n;

    ok = true;
    do
    {
        printf("\nAdj meg egy szamot!\n");
        if (scanf("%d", a) != 1)
        {
            printf("Invalid input");
            ok = false;
            while(getchar() !='\n');
        }
    }while (!ok);

    do
    {
        printf("Add meg, hogy hanyadik hatvanyon legyen az elozo szam!\n");
        if (scanf("%d", b) != 1)
        {
            printf("Invalid input");
            ok = false;
            while(getchar() !='\n');
        }
    } while (!ok);
}

int hatvanyozas(int szam, int hatvany)
{
    return pow(szam, hatvany);
}