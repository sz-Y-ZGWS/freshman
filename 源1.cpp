#include<stdio.h>
int main()
{
    unsigned short x, y, z;
    scanf("%d %d", &x, &y);
    z = (x >> 8) << 8 | y >> 8;
    printf("%d\n", z);
    return 0;


}