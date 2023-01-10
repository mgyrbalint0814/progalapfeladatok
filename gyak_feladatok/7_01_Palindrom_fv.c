#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindroma_e(char* str[]);

int main()
{
    char str[50];

    printf("Adja meg a szoveget: ");

    gets(str); 

    if(palindroma_e(str))

      printf("A megadott szoveg nem palindrom");

    else

        printf("A megadott szoveg palindrom");        

    return 0;
}

int palindroma_e(char* str[]) 
{
    int l,comp=0,n;
    n=strlen(str);  

    for(l=0;l<n/2;l++)
    {
     if(str[l]==str[n-l-1])
     comp++;
    } 

  if(comp==l)

        return 1;

    else

        return 0;

}