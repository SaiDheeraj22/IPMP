#include<stdio.h>
int sum(int arr[],int n,int x)
{int res = arr[0] + arr[1];
	int found=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int sum = arr[i] + arr[j];
            if (abs(sum) < abs(res)) {
                res = sum;
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