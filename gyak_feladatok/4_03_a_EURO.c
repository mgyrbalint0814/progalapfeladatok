#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#define SIZE 12

int main()
{
    int array[SIZE];
    int db=0;
    bool ok;
    double limit = 400.0;

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
    
    for (unsigned i = 0; i < SIZE; i++)
    {
        if (array[i] < limit)
    {
       db++;
    }
    }
    printf("\n Az arfolyam erteke %d-szer volt %.2f alatt", db,limit);
    return 0;
}