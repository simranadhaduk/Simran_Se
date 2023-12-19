#include<stdio.h>
int main()
    {
    int i, arr[10],c=0;
    for(i=1;i<=10;i++)
    {
        printf("enter your array numbers [%d] \n :",i);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=10;i++)
    {
        while(arr[i]>c)
        {
            c=arr[i];
        }
        printf("Greatest number in a given array is:%d \n",c);
    }
    return 0;
} 
