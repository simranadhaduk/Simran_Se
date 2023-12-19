#include<stdio.h>
void main(){
	int arr[20],i, size, biggest=0;
	printf("\n\n Input array size : ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n\n Input element[%d] : ",i);
		scanf("%d",&arr[i]);	
	}
	biggest=arr[0];
	for(i=0;i<size;i++){
		if(arr[i]>biggest)
		biggest=arr[i];
	}
	printf("\n\n Biggest Element : %d", biggest);	
}
