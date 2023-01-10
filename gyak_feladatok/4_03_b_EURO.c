#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#define SIZE 12

int main()
{
    int array[SIZE];
    int db=0;
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

     bool is_monotone = true;
        for (unsigned int i = 1; i < SIZE; i++)
        {
        if (array[i - 1] > array[i])
        {
            is_monotone = false;
            break;
        }
    }
    printf("A sor monoton: %s.\n", is_monotone ? "igen" : "nem");
    return 0;
}