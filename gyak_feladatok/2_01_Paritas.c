#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Give me a number: ");
    scanf("%d", &num);
    printf((num % 2) == 0 ? "even\n" : "odd\n");
    return 0;
}