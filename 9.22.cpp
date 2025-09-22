//模拟用户登录情景，只能登录三次(假设密码为abcdef）
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char password[20];
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("登陆成功");
			break;
		}
		else
		{
			printf("密码错误\n");

		}
		if (i == 2)
			printf("三次密码均错，推出程序\n");

	}
	return 0;
}