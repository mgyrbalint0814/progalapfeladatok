#include<stdio.h>
#include<stdlib.h>

int main(){
    int szam1,szam2;

    printf("Adj meg 2 darab szamot:");
    scanf("%d,%d", &szam1,&szam2);

    if (szam1==szam2)
    {
       printf("The given numbers are equal");
    }
    else if(szam1>szam2){
        printf("%d nagyobb,mint %d", szam1,szam2);
    }
    else if(szam1<szam2)
    {
        printf("%d nagyobb,mint %d", szam2,szam1);
    }

    return 0;
}