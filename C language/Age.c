//(condtion)?exp1:exp2;
// > < >= <= ==
//  && || =!
#include<stdio.h>
main()
{
	int age;
	printf("Enter your age here : ");
	scanf("%d",&age);
	(age > 18)?printf("you are allowed"):printf(" you are not allowed");
}
