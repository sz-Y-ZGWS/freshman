#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char password[20];
	printf("ÇëÊäÈëÃÜÂë>\n");
	scanf("%s", password);
	int ch;
	while ((ch = getchar()) != '\n');
	{ ; }
	printf("ÇëÈ·ÈÏÃÜÂë(Y/N):>\n");
	int ret = getchar();
	if (ret == 'Y')
		printf("Yes\n");
	else
		printf("No\n");
	return 0;


}