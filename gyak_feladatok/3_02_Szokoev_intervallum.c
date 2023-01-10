#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    int lower, upper;
    bool ok;

    do 
{
    ok = 1;
   printf("Add meg az intervallum also hatarat: ");
   if (scanf("%d", &lower)!=1) 
   {
    printf("Invalid iput\n");
   ok = 0;
   while ((getchar())!='\n') ;
   }
} while (!ok);

do 
{ 
    ok = 1;
    printf("Add meg az intervallum felso hatarat: ");
   if (scanf("%d", &upper)!=1) 
   {
    printf("Invalid input\n");
    ok = 0;
    while ((getchar())!='\n') ;
   }
}

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