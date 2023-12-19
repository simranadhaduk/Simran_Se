//Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
void main(){
	char str1[50];
	int i, len=0;
	printf("\n\n\t Input a string to find out its length : ");
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++){
			len++;
    }
   	printf("\n\n\t String : %s", str1);
	printf("\n\n\t String Length : %d characters.", len);
}
