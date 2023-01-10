#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, sum = 0;
    printf("Adj meg egy szamot: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    printf("A szamok osszege 1-tol %d-ig = %d\n", N, sum);
    return 0;
}