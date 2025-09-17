#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	float total=0.0,a,b,c,d;
	a = 2.0; b = 1.0;
	c = 3.0; d = 2.0;
	scanf("%d", &n);
	if(n>=1)
	{
		total += a / b;
	}
	if (n >= 2)
	{
		total += c / d;
	}
	for (int i = 3; i <= n; i++)
	{
		float new_fenzi = a + c;
		float new_fenmu = b + d;
		total += new_fenzi / new_fenmu;
		a = c; b = d;
		c = new_fenzi; d = new_fenmu;
	}
	printf("%.2f", total);
	return 0;
}