#include<stdio.h>
int sum(int arr[],int n,int x)
{
	int found=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (arr[j] < arr[j + 1]) { // Compare for decreasing order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
		}
	}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}
int main(){
	int n,check;
	printf("enter the number\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the %d elements",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int num;
	printf("enter the targetd number");
	scanf("%d",&num);
	sum(arr,n,num);
	
	return 0;
}