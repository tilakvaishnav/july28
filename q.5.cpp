#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
	{
		max=a[i];
	}
	}
}
