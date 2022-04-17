#include <stdio.h>

int main(void)
{
    float salHora;
    int numFunc, horTrab;

    scanf("%d%d%f", &numFunc, &horTrab, &salHora);

    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2f\n", horTrab*salHora);
}
