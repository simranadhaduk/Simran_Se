#include <stdio.h>
void rev_string();
void main(){
	printf("\n\n\t Input a string : ");
    rev_string();
}
void rev_string(){
    char s;
    scanf("%c", &s);
    if(s!='\n') 
	{
        rev_string();
        printf("%c", s);
    }
}
