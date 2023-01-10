#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

#define Size 10

int main()
{
    int array;
    int key;
    bool ok;

    do
    {
        printf("Adj meg 10 szamot:\n");
        for (int i = 0; i < 10; i++)
        { 
            ok = true;
            printf("%d.szam: ", i+1);
            if(scanf("%d", &array[i]) != 1 && -1000 <= i <= 1000)
        {
            printf("Invalid input!");
            ok = false;
            while(getchar() !='\n');
        }
     }
    } while (!ok);

    
    bool found = false;
    for (unsigned int i = 0; i < Size; i++)
    {
        if (key == array[i])
        {
            found = true;
            printf("%u was found at index %u.\n", key, i);
            break;
        }
    }

    if (!found)
    {
        printf("%u was not found in the array.\n", key);
    }

    return 0;
}