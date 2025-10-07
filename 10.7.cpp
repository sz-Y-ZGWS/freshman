#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	system("color 0c");
	int c = 0;
	char arr[20];
	strcpy(arr, "I Love You!");
	int len = strlen(arr);
	for (float i = 2.5; i > -2.0; i -= 0.12)
	{
		for (float j = -2.5; j < 2.1; j += 0.05)
		{
			float a = i * i + j * j - 4;
			if (a * a * a - j * j * i * i * i < -0.0)
			{
				int n = c % len;
				printf("%c", arr[n]);
				Sleep(1);
				c++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("天天开心\n");
	system("pause");
	return 0;
}