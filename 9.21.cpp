//猜数字游戏
//输入1到100的整数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************\n");
	printf("*****1.play****\n");
	printf("*****0.exit****\n");
	printf("***************\n");
}

void game()
{
	int guess;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");

		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了！");
			break;
		}
	}
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	 do
	{ 
		menu();
	printf("请选择:>");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 2:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误，请重新选择\n");
		break;
	}
	}while (input);
	return 0;
}