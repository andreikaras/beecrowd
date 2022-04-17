#include <stdio.h>

int main(void)
{
    char nome[20];
    double salFixo, totVend;

    scanf("%s%lf%lf", nome, &salFixo, &totVend);

    printf("TOTAL = R$ %.2lf\n", salFixo + totVend*0.15);
    return 0;
}
