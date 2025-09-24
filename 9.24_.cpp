//输入1到100之间的素数
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	if (n <= 1)return 0;
	if (n == 2)return 1;
	if (n % 2 == 0)return 0;
	for (int i =3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int count = 0;
	printf("1到100的素数有：\n");
	for (int i = 2; i <= 100; i++)
	{
		if (isPrime(i))
		{
			printf("%3d", i);
			count++;
			if (count % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n总共%d个素数\n",count);
	return 0;
}