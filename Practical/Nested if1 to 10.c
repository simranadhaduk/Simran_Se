#include<stdio.h>
main()
{
	int row, col;
	for(row=1;row<=10;row++){
		 if(row==5){
		 	printf("$");
		 	continue;
		 }else{
		 	printf("%d",row);
		 }
	}
}
