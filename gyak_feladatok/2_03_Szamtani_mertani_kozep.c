#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

int main(){
    double a, b;
    bool ok;
    do
    {
        ok = true;
        printf("Adj meg két szamot:\n");
        if(scanf("%lf,%lf", &a, &b) !=2)
        {
            printf("Invalid input\n");
            ok = false;
            while(getchar() !='\n');
         }


    } while (!ok);

    printf("A szamtani kozepe: %lf", (a+b)/2);
    printf("A mertani kozepe: %lf", sqrt(a*b));
    return 0;
}