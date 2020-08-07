#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    double num2;
    char num3;

    scanf("%d %lf %c", &num1, &num2, &num3);
    printf("%d\n%f\n%c", num1, num2, num3);
    return 0;
}