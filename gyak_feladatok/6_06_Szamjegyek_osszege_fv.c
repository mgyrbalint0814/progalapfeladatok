#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void int_beolvas(int* x);
int szamjegyek_osszege(int n);

int main()
{
    int szam;
    int n;
    int_beolvas(&n);
    szam = szamjegyek_osszege(n);
    printf("%d", szam);

    return 0;
}


void int_beolvas(int* x) {
    bool ok;

    ok = true;
    do
    {
        printf("Adj meg egy szamot!\n");
        if (scanf("%d", x) != 1)
        {
            printf("Invalid input");
            ok = false;
            while(getchar() !='\n');
        }
        
    } while (!ok);
    
}
int szamjegyek_osszege(int n) {
  if (n == 0) 
    return 0;

  return (n%10 + szamjegyek_osszege(n/10));
}