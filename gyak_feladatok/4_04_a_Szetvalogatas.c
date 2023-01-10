#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>


int main()
{
    int Size = 10, array[10], Positive[10], Negative[10], positivec = 0, negativec = 0;
    bool ok;

    do
    {
        printf("Adj meg 10 szamot:\n");
        for (int i = 0; i < 10; i++)
        { 
            ok = true;
            printf("%d.szam: ", i+1);
            if(scanf("%d", &array[i]) != 1)
        {
            printf("Invalid input!");
            ok = false;
            while(getchar() !='\n');
        }
     }
    } while (!ok);


    for (int i = 0; i < 10; i++)
    {
        if (array[i] >= 0)
        {
            Positive[positivec] = array[i];
            positivec++;
        }
        if (array[i] < 0)
        {
            Negative[negativec] = array[i];
            negativec++;
        }
        
    }
 
    printf("\n Pozitiv szamok tombje:\t");
    for(int i = 0; i <positivec; i++)
    {
        printf("%d\t ", Positive[i]);
    }
    printf("\n");
 
    printf("\n Negativ szamok tombje:\t");
    for(int i = 0; i < negativec; i++)
    {
        printf("%d\t ", Negative[i]);
    }
    printf("\n");


    float posavg = 0;

    for (int i = 0; i < positivec; i++)
    {
        posavg += Positive[i];
    }

    posavg /= positivec;

    printf("Pozitiv szamok atlaga: %.2lf\n", posavg);
    
    double negavg = 0;

    for (int i = 0; i < negativec; i++)
    {
        negavg += Negative[i];
    }

    negavg /= negativec;

    printf("Negativ szamok atlaga: %.2lf", negavg);
    
    
    return 0;
}