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
        printf("Adj meg ket szamot:\n");
        if(scanf("%lf,%lf", &a, &b) !=2)
        {
            printf("Invalid input\n");
            ok = false;
            while(getchar() !='\n');
         }
         if (a < 0)
         {
            printf("Invalid input");
         }
          if (b < 0)
         {
            printf("Invalid input");
         }
         
    } while (!ok);

    return 0;
}