#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int loop(int x)
{   
    int c=0, m=x;
    while (x > 0)
    {
        c = c * 10 + x % 10;
        x = x / 10;
    }

    return c == m;

}

int main()
{
    int a,b, i;
    scanf ("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        if (loop(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;


}