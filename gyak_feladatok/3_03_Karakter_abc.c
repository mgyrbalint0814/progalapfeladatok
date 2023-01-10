#include<stdio.h>
#include<math.h>

int main(){
    char betu;
    printf("\n Adj meg egy betut:");
    scanf("%c",&betu);
    if(betu>='A' && betu<='z')
    {
        printf("Benne van az ABC-be");
    }
    else{
        printf("Nincs benne az ABC.ben");
    }

    if(betu=='a' ||betu=='e' || betu =='A')
    {
        printf("\n Maganhangzo");
    }
    else{
        printf("\n Massalhangzo");
    }
    return 0;
}