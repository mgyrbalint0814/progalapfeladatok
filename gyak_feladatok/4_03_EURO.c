#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int db = 0;

        double euro[] = {389.5, 392.6, 410.2, 395.5, 300.4, 402.3, 402.5, 403.3, 408.5, 399.9};
        int size = sizeof(euro) / sizeof(double);
        double limit = 400.0;

        printf("\nHUF/EURO arfolyamok:\n");
        for (unsigned int i = 0; i < size; i++) {
            printf("%d. ertek: %.2lf\n", i + 1, euro[i]);
            if (euro[i] < limit)
            {
                db++;
            }
        }

        printf("\nAz arfolyam erteke %d-szor volt %.2f alatt.\n", db, limit);

    bool is_monotone = true;
        for (unsigned int i = 1; i < size; i++)
        {
        if (euro[i - 1] > euro[i])
        {
            is_monotone = false;
            break;
        }
    }

    printf("A sor %s.\n", is_monotone ? "monoton növekvö" : "nem monoton");       


    int min = euro[0], max = euro[0];
    for (unsigned int i = 1; i < size; i++)
    {
        if (euro[i] < min)
        {
            min = euro[i];
        }
        if (euro[i] > max)
        {
            max = euro[i];
        }
        
    }
    
    printf("Minimum ertek: %d\n", min);
    printf("Maximum ertek: %d\n\n", max);

    int min_index = 0, max_index = 0;
    for (unsigned int i = 1; i < size; i++)
    {
        if (euro[i] < euro[min_index])
        {
            min_index = i;
        }
        if (euro[i] > euro[max_index])
        {
            max_index = i;
        }
    }
    
    printf("Minimum ertek helye: %d\n", min_index);
    printf("Maximum ertek helye: %d\n\n", max_index);

    float avg = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        avg += euro[i];
    }

    avg /= size;
    printf("Atlag: %.2lf\n\n", avg);

    printf("Sorszam\tAtlag\tAtlagtol valo elteres\n");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d.\t%.2lf\t%.2lf\n", i + 1, euro[i], euro[i] - avg);
    }
    
    return 0;
}