#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{
    double raio;

    scanf("%lf", &raio);

    printf("VOLUME = %.3lf\n", (double) 4/3 * PI * pow(raio, 3));
}
