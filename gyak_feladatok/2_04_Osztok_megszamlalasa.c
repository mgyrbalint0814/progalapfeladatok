#include<stdio.h>

int main(){
    int szam, oszto, darab=0;

    printf("Adj meg egy szamot:");
    scanf("%d", &szam);

    oszto=1;

    while(oszto<=szam){
        if(szam%oszto==0) darab++;
        oszto++;
    }

    printf("\n%d osztoinak szama: %d\n", szam,darab);

    return 0;
}