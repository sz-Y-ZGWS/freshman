//�����Լ������С������
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
	printf("%d��%d�����Լ��Ϊ%d\n", a, b, c);
	if (c != 0)
	{
		d = (a * b) / c;
		printf("%d��%d����С������Ϊ%d\n", a, b, d);
	}
	if (c == 0)
		printf("����");
	
	
	return 0;
}