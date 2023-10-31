#include<stdio.h>
main(){
	int n=5;
	int i,j;
	char ch ='a';
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c",ch);
			
			if (ch<'z')
			ch++;
			else
			ch='A';
//			 /* reset char */
		}
		printf ("\n");
	}
}
