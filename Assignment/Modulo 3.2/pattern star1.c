#include<stdio.h>
int main (){
	int n=5;//size
	
	int px=n;//left print control 
	int py=n;//right printf control
	
	int i,j;//loop var
	
	for (i=1;i<=n;i++)
	{
		for(j=1;j<n*2;j++)
		{
			if(j>=px&&j<=py)
			{
				printf("*");
			}
			else
			{
				printf(" ");
				
			}
		}
		px--;
		py++;
		
		printf("\n");
	}
}
