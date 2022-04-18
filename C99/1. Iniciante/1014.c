#include <stdio.h>

int main(void)
{
    float y;
    int x;

    scanf("%d%f", &x, &y);

    printf("%.3f km/l\n", x/y);
}
