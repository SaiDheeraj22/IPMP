#include<stdio.h>
int sum(int arr[],int n,int x,int prod[])
{
	int found=0;
	for (int i = 0; i < n; i++) {
        prod[i] = 1;
    }
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (i != j) {
                prod[i] *= arr[j];
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
	int prod[n];
	printf("enter the %d elements",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int num;
	printf("enter the targetd number");
	scanf("%d",&num);
	sum(arr,n,num,prod);
	for (int i = 0; i < n; i++) {
        printf("%d ", prod[i]);
    }
	return 0;
}