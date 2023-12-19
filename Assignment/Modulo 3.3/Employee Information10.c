#include<stdio.h>
union student{
	int rollno;
	char name[30];	
	char address[3];
};
void main(){
	union student s1, s2;  
	printf("\n\n Enter a Rollno : ");
	scanf("%d",&s1.rollno);
	printf("\n\n Enter a Name : ");
	scanf("%s",&s1.name);
	printf("\n\n Enter Address : ");
	scanf("%s",&s1.address);
	printf("\n\n ....... Info of student1 ..........");
	printf("\n\n Roll no : %d",s1.rollno);
	printf("\n\n Name    : %s" ,s1.name);
	printf("\n\n Name    : %s" ,s1.address);	
	printf("\n\n Enter a Rollno : ");
	scanf("%d",&s2.rollno);
	printf("\n\n Enter a Name : ");
	scanf("%s",&s2.name);
	printf("\n\n Enter Address : ");
	scanf("%s",&s2.address);
	printf("\n\n ....... Info of student2 ..........");
	printf("\n\n Roll no : %d",s2.rollno);
	printf("\n\n Name    : %s" ,s2.name);
	printf("\n\n Address    : %s" ,s2.address); 
}
