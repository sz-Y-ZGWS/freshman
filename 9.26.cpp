#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, ret=1, sum=0,i;
	scanf("%d", &i);
	for (n = 1; n <= i; n++)
	{
		ret = ret * n;
		sum = sum + ret;


	}
	printf("%d\n", sum);
	return 0;
}