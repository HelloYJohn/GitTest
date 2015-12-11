#include <stdio.h>
#include <stdlib.h>

void lis(float l[], int len)
{
	int i, j, max;
	int* f = malloc(sizeof(int)*len);
	f[0] = 1;
	max = 1;
	for(i = 1; i < len; i++)
	{
		f[i] = 1;
		for(j = 0; j < i; j++)
		{
			if(l[i] > l[j] && f[j] > f[i] - 1)
				f[i] = f[j] + 1;
		}
		if(f[i] > max)
			max = f[i];
	}
	printf("the lis is %d", max);

}

int main(void)
{
	float a[10];
	int i,n;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%f", &a[i]);
	}
	lis(a, n);
	return 0;
}
