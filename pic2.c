#include<stdio.h>

int findmax(int *b,int n);
int main()
{
	int a[5] = { 1,3,5,17,9 };
	int max = findmax(a,5);
	printf("%d\n",max);
	
	return 0;
}

int findmax(int *b,int n)
{
	int i;
	int m=b[0];
	for(i=0;i<n;i++)
	{
		if (b[i]>m)
		{
			m = b[i];
		}
	}
	return m;
}

