
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char c[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    int key;
    scanf("%d", &key);
    for (int i = 0; i < len; i++)
    {
        c[i] = str[i] ^ key;

    }
    c[len] = '\0';
    printf("%s\n", c);
    printf("%s", str);
    return 0;

}