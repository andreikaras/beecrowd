#include <stdio.h>
#define REND 12

int main(void)
{
    int tempo, velMedia;

    scanf("%d%d", &tempo, &velMedia);

    printf("%.3f\n", (float) tempo * velMedia / REND);
}
