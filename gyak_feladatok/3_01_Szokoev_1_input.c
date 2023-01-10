#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    int year = 0, a;
    bool ok;
    do
    {
        ok = true;
        printf("Adj meg egy szamot:\n");
        if(scanf("%lf", &a) !=1)
        {
            printf("Invalid input\n");
            ok = false;
            while(getchar() !='\n');
         }
    } while (!ok);
    
    if ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0) )
{
    printf("Leap year\n");
}
else
{
    printf("Not Leap year\n");
}    

return 0;
}