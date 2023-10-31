#include<stdio.h>
main(){
	int n = 5;
	int i,j;
	 for (i=1;i<=n;i++)
	 {
	 	for (j=0;j<i;j++)
	 	{
	 		pritnf("%d",(i+j)%2);
		 }
		 printf("\n");
	 }
}
