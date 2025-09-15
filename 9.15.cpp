//读入1个小写字符和整数k(0 < k < 26)，输出这个字符后的第k个小写字符。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a;
	int k;
	scanf("%c %d", &a, &k,10);
	int c = a - 'a';
	int new_pos = (c + k) % 26;
	char result = 'a' + new_pos;
	printf("%c\n", result);

	return 0;
}
