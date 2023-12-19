#include<stdio.h>
void main()
{
	int n1, n2, choice;
	printf("\n\n\t Input Number 1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Input Number 2 : ");
	scanf("%d",&n2);
	while(1){
	printf("\n\n\t ..................................");
	printf("\n\n\t 1. Addition ");
	printf("\n\n\t 2. Subtraction ");
	printf("\n\n\t 3. Multiplication ");
	printf("\n\n\t 4. Division ");
	printf("\n\n\t 5. Exit ");
	printf("\n\n\t ..................................");
	printf("\n\n\t Input your choice to perform : ");
	scanf("%d",&choice);
	switch(choice){
		case 1 : 
			printf("\n\n\t Addition : %d", n1+n2);
			break;			
		case 2 : 
			printf("\n\n\t Subtraction : %d", n1-n2);
			 break;
				 
		case 3 :
			 printf("\n\n\t Multiplication : %d", n1*n2);
			 break;
				 
		case 4 :
			 printf("\n\n\t Division : %d", n1/n2);
			 break;
				 
		case 5 : 
			exit(0);
			 break;
		default :
				 printf("\n\n\t Invalid choice... ");
				 break;
	}
}
}
