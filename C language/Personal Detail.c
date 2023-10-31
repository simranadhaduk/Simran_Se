#include<stdio.h>
#include<conio.h>
int main () {
	char name [20], birthday[10], address[50], age[15];
	
	printf("Please enter your name: ");
	scanf("%s",& name);
	printf("\n");
	printf("Please enter your birthday: ");
	scanf("%s",& birthday);
	printf("\n");
	printf("Please enter your address: ");
	scanf("%s",& address);
	printf("\n");
	printf("Please enter your age: ");
	scanf("%s",& age);
	printf("\n");
	
	printf("\n");
	printf("your name is : %s", name);
	printf("\n");
	printf("Your birthday is : %s", birthday);
	printf("\n");
	printf("Your address is : %s", address);
	printf("\n");
	printf("Your age is : %s", age);
	printf("\n");
	
	getch();
	
}
