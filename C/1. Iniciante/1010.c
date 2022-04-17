#include <stdio.h>
#define QTD 2

int main(void)
{
    float valUnit[QTD], total = 0;
    int i, codPeca[QTD], numPeca[QTD];

    for (i = 0; i < QTD; i++) {
        scanf("%d%d%f", &codPeca[i], &numPeca[i], &valUnit[i]);
        total += numPeca[i] * valUnit[i];
    }

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
