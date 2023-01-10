#include<stdio.h>
#include<stdlib.h>

#define SIZE 6

int main()
{
    int marks[SIZE];

    printf("Jegyek:\n");
    for (unsigned int i = 0; i < SIZE; i++)
    {
        printf("%d. jegy: ", i + 1);
        scanf("%d", &marks[i]); 
    }

    float sum = 0;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        sum += marks[i];
    }
    
    sum /= SIZE;

    printf("Atlag= %.2f\n", sum);


    if (sum <= 3.5)
    {
        printf("0 ft/ho");
    }
    else if(3.51 <= sum <= 4)
    {
        printf("5000 ft/ho");
    }
    else if(4.01 <= sum <= 4.50)
    {
        printf("10000 ft/ho");
    }
    else if(4.51 <= sum <= 5)
    {
        printf("15000 ft/ho");
    }
    

    return 0;
}