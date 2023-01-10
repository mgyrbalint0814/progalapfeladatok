#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void int_beolvas(int* x);
int faktorialis(int x);

int main() 
{
    int szam;
    int_beolvas(&szam);
    if(szam <= 0 || szam >= 10)
    {
        int_beolvas;
    }
    printf("%d faktorialisa %d.", szam , faktorialis(szam));
    return 0;
}

void int_beolvas(int* x)
{
    bool ok;
    do
    {
        ok = true;
        printf("Adj meg egy szamot: ");
        if(scanf("%d", x) != 1)
        {
            printf("Invalid input!");
            ok = false;
            while(getchar() !='\n');
        }
        else if(*x <= 0 || *x >= 10)
        {
            printf("Invalid input!");
            ok = false;
            while(getchar() !='\n');
        }
    } while (!ok);
    
     return ;
}

int faktorialis(int x) 
{
    int factor = 1;
    while(x>1)
    {
        factor *= x;
        x--;
    }
    
    return factor;
}