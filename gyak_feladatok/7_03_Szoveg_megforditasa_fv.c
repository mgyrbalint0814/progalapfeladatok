#include <stdio.h>
#include <string.h>

char* megfordit(char szoveg[]);

int main()
{
    char str[50];  
    printf (" Add meg a szoveget: ");  
    gets(str);   
    printf (" \n A szoveg megforditás elott: %s \n", str);  
    megfordit(str);  
    printf (" A szoveg megforditas utan: %s", str);  
}

char* megfordit(char szoveg[]) 
{  
    int i, len, temp;  
    len = strlen(szoveg); 
    for (i = 0; i < len/2; i++)  
    {   
        temp = szoveg[i];  
        szoveg[i] = szoveg[len - i - 1];  
        szoveg[len - i - 1] = temp;  
    }  

}