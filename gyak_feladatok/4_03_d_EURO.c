#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 12

int main()
{
    int array[SIZE];
    bool ok;
    
    do
    {
        ok = true;
        printf("Adj meg 12 szamot:\n");
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

    float avg = 0;
    for (unsigned i = 0; i < SIZE; i++)
    {
        avg += array[i];
    }
    avg /= SIZE;

    printf("Atlag:%.2lf\n", avg);

    printf("Sorszam\tArfolyam\tAtlagtol valo elteres\n");
    for (unsigned i = 0; i < SIZE; i++)
    {
        printf("%d.\t%.2lf\t  %.2lf\n",i + 1, array[i], array[i] - avg);
    }
    

    return 0;
}