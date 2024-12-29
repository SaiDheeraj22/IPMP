#include<stdio.h>
int sum(int arr[],int n,int x)
{
	int found=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(x==arr[i]+arr[j])
			{
				found++;
			}
		}
	}
	return found;
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
	check=sum(arr,n,num);
	if(check)
	{
		printf("found");
	}
	else
	printf("not found");
	return 0;
}