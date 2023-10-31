////control statements
/*
simple if
if(Condition){
true statement
}
if else
if(condition){
true statement
}else{
}else{
false statement;
}
*/
#include<stdio.h>
main(){
		int age;
		printf("Enter your age here : ");
		scanf("%d",&age);
		if(age > 18)
		{
			printf("Allowed");
		}else{
			printf("Not Allowed");
		}
}
