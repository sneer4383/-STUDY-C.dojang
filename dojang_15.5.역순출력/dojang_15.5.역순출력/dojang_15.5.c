#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    int num;
    int arr[5];

    scanf("%d", &num);

    arr[0] = num % 10;
    arr[1] = num % 100/10;
    arr[2] = num % 1000/100;
    arr[3] = num % 10000/1000;
    arr[4] = num % 100000/10000;

    for (int i = 0;i < 5;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}