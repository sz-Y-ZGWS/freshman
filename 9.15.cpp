//����1��Сд�ַ�������k(0 < k < 26)���������ַ���ĵ�k��Сд�ַ���
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
