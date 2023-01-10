#include <stdio.h>
#include <ctype.h>

char* kisbetusit(char *szoveg);
char* nagybetusit(char *szoveg);

int main()
{
    char str[50];
 
	printf("Add meg a szoveget: ");
    scanf("%[^\n]s",str);//read string with spaces
    
    kisbetusit(str);
    printf("Kisbetus szoveg: %s\n",str);
    
    nagybetusit(str);
    printf("Nagybetus szoveg: %s\n",str);
    return 0;
}

char* kisbetusit(char *szoveg) 
{
    int i=0;
    while(szoveg[i]!='\0')
    {
        if(szoveg[i]>='A' && szoveg[i]<='Z'){
            szoveg[i]=szoveg[i]+32;
        }
        ++i;
    }
}

char* nagybetusit(char *szoveg) 
{
    int i=0;
    while(szoveg[i]!='\0')
    {
        if(szoveg[i]>='a' && szoveg[i]<='z'){
            szoveg[i]=szoveg[i]-32;
        }
        ++i;
    }
}