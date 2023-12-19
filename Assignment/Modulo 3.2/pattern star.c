#include<stdio.h>
main(){
	int n=7;
	int i,j;
	int x=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*x;j++)
		{
		if(j<=x)
		printf("*",j+64);
		else
		printf("*",64+2*x-j);
	}
	if (i<=n/2)
	x++;
	else
	x--;
	printf("\n");
	}
}
