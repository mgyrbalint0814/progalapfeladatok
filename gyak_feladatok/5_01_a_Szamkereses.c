#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#define SIZE 10

int main()
{
    int array[SIZE];
    bool ok;
    do
    {
        ok = true;
        printf("Adj meg 10 szamot:\n");
        for (unsigned int i = 0; i < SIZE; i++)
    {
        printf("%d. szam: ", i + 1);
        if (scanf("%lf", &array[i]) !=1)
        {
            printf("Invalid input\n");
            ok = false;
            while(getchar() !='\n');
        }
    }
    } while (!ok);

int keresettszam;
printf("Add meg a keresett szamot!");
scanf("%d",&keresettszam);
bool found = false;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        if (keresettszam == array[i])
        {
            found = true;
            printf("%u az intervallumban van %u.\n", keresettszam, i);
            break;
        }
    }

    if (!found)
    {
        printf("%u nincs az intervallumban.\n", keresettszam);
    }
}