#include<stdio.h>
struct Employee
 {
 		int eno;
 		char ename[30];
 		char address[30];
 		int age;
 }A, E[3];
void main(){
		int i;
	 	A.eno=12;
	 	strcpy(A.ename,"Mr.Shukla");
	 	strcpy(A.address,"Ahmedabad");
	 	A.age=34;
	 	printf("\n\n\t Input Employee's No : '");
	 	scanf("%d",&A.eno);
		printf("\n Employee's  Name      : ");
		scanf("%s",&A.ename);
		printf("\n Employee's  Address    :  ");
		scanf("%s",&A.address);
		printf("\n Employee's  Age    :  ");
		scanf("%d",&A.age);
	 	for(i=0;i<5;i++){
	 		printf("\n\n ................Employee [%d]...........",i);
	 		printf("\n Employee No   [%d] : ",i);
			scanf("%d",&E[i].eno);
			printf("\n Employee's  Name      : ");
			scanf("%s",&E[i].ename);
			printf("\n Employee's  Address    :  ");
			scanf("%s",&E[i].address);
			printf("\n Employee's  Age    :  ");
			scanf("%d",&E[i].age);		
		}	
		for(i=0;i<5;i++){
	 		printf("\n\n ................Employee [%d]...........",i);
	 		printf("\n Employee No   [%d]   :  %d",E[i].eno);
			printf("\n Employee's  Name      : %s",E[i].ename);
			printf("\n Employee's  Address    :  %s",E[i].address);
			printf("\n Employee's  Age    :  %d",E[i].age);		
		}	
}
