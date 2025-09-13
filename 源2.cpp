#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float S, s;
    s = (a + b + c) / 2;
    S = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.3f\n", S);
    return 0;

}