/*WAP to take two Array input from user and sort them in ascending or descending order as per user?s choice. */

#include<stdio.h>
void main(){
	int size, s, p, arr[20], temp, arr1[20];
	printf("\n\n Input size of array : ");
	scanf("%d",&size);
	for(s=0;i<size;s++){
		printf("\n\n Input array [%d] : ",s);
		scanf("%d",&arr[s]);	
	}
	for(s=0;s<size;s++){
		for(p=s+1;p<size;p++)
		{
			if(arr[s]>arr[p])
			{
				temp=arr[s];
				arr[s]=arr[p];
				arr[p]=temp;
			}
			
		}	
	}
	printf("\n\n\t Array-1 ... Ascending Order....");
	for(s=0;s<size;s++){
		printf("\n\n array [%d] : %d",s, arr[s]);
	}
	printf("\n\n\t ============================================");
	printf("\n\n Input size of array : ");
	scanf("%d",&size);
	for(s=0;s<size;s++){
		printf("\n\n Input array [%d] : ",s);
		scanf("%d",&arr1[s]);	
	}
	temp=0;
	for(s=0;s<size;++s){
		for(p=s+1;p<size;++p){
			if(arr1[s]<arr1[p]){
				temp=arr1[s];
				arr1[s]=arr1[p];
				arr1[j]=temp;
			}
		}	
	}
	printf("\n\n\t Array-2 ... Descending Order....");
	for(s=0;s<size;s++){
		printf("\n\n array [%d] : %d",s, arr1[s]);
	}	
}
