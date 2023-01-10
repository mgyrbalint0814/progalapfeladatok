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

    int min = array[0],max = array[0];
    for (unsigned i = 1; i < SIZE; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (array[i] > max)
        {
            max = array[i];
        }
        
    }
    printf("Min:%lf\n", min);
    printf("Max:%lf\n", max);
    
    int min_index = 0,max_index = 0;
    for (unsigned i = 1; i < SIZE; i++)
    {
        if (array[i] < array[min_index])
        {
            min_index = i;
        }
        if (array[i] > array[max_index])
        {
            max_index = i;
        }
     }
     printf("Min helye:%d\n",min_index + 1);
     printf("Max helye:%d\n",max_index + 1);
    
    return 0;
}