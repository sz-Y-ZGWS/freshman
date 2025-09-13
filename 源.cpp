#include<stdio.h>
#include<math.h>
int main()
{
    int m, n;
    scanf_s("%d:%d", &m, &n);
    m = m % 12;
    float A;
    A = fabsf((m * 30.0f + n * 0.5f) - n * 6.0f);
    if (A < 180)
        printf("%.3f\n", A);
    else
        printf("%.3f\n", 360 - A);
    return 0;
}