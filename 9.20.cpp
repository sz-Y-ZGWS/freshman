//求最大公约数和最小公倍数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int yue(int x, int y)
{
		do
		{
			int m;
			m = x % y;
			x = y;
			y = m;

		} while (y != 0);
		return x;
}


int main()
{
	int a, b,c,d;
	scanf(" %d %d", &a, &b);
	c = yue(a, b);
	printf("%d与%d的最大公约数为%d\n", a, b, c);
	if (c != 0)
	{
		d = (a * b) / c;
		printf("%d与%d的最小公倍数为%d\n", a, b, d);
	}
	if (c == 0)
		printf("错误");
	
	
	return 0;
}