#include <stdio.h>
#include <stdlib.h>
#define QTD 3

int ProcMaior(int a, int b)
{
    return (a + b + abs(a - b)) / 2;
}

int main(void)
{
    int i, maior, num[QTD];

    for (i = 0; i < QTD; i++)
        scanf("%d", &num[i]);
    
    maior = num[0];
    
    for (i = 1; i < QTD; i++)
        maior = ProcMaior(maior, num[i]);
    
    printf("%d eh o maior\n", maior);
    return 0;
}
