#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    float diameter;
    float radius;
    float area;

    scanf("%f", &diameter);

    radius = diameter / 2.0f;
    area = radius * radius * M_PI;

    printf("%f\n", area);
    return 0;
}