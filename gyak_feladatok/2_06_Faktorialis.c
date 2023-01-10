#include<stdio.h>

int main(){
    int max, szam=1, i;

    printf("Adja meg a kivant szamot:");
    scanf("%d",&max);

    for ( i = 1; i <= max; i++)
    {
        szam *= i;
        printf("A %d. szam faktorialisa: %d\n", i,szam);
    }
    return 0; 
    
}