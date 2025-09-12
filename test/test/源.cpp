#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main ()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//		again:
//		printf("请注意，你的电脑在60秒内关机。如果输入：我是主，就取消关机\n");
//	scanf_s("%s", input,20);
//	if(strcmp(input,"我是主")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑在60秒内关机;如果输入：我是主，就取消关机\n");
		scanf_s("%s", input, 20);
		if (strcmp(input, "我是主") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;

}