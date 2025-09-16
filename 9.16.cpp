#define N_VALUES 5
#include<stdio.h>
int main()
{
	int values[N_VALUES];
	int* vp;
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp = 0;
		printf("%d\n", *vp);
		vp++;
		}
	return 0;
}