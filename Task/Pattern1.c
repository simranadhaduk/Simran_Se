#include<stdio.h>
main()
{
	int n=5;
	int i,j;
	for (i=1;i<=n;i++)
	{
		for(i=1;j<=n;j++)
		{
			if(j == n-i+ 1)
			{
				printf("*");
			}
			else{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
