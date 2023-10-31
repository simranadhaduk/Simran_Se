#include<stdio.h>
int main()
{
	int n=5;
	int i,j;
	
	for (i=n-1;i>=0;i--)
	{
		for (i=0;j<=n-1;j++)
		{
			printf ("%2d", (i-j));
			
		}
		printf ("\n");
	}
}
