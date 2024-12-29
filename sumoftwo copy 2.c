#include<stdio.h>
int sum(int arr[],int n,int x)
{
	int found=0,rightsum=0,leftsum=0;
	for(int i=0;i<n;i++)
	{
		for (int j = 0; j < i; j++)
            leftsum += arr[j];
        rightsum = 0;
        for (int j = i + 1; j < n; j++)
            rightsum += arr[j];

        if (leftsum == rightsum)
            return i + 1;
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
		printf("equilibrium");
	}
	else
	printf("not equilibrium");
	return 0;
}