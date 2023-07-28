#include<stdio.h>
int main()
{
	int a,rem=0,res=0;
	printf("entr the value of a");
	scanf("%d",&a);
	int n=a;
	{
	while(n!=0)
	{
		rem=n%10;
		res=res+rem*rem*rem;
		n=n/10;
	}
	if(res==a)
	{
		printf("the number is armstrong number ");
	}
	else
	{
		printf("the number is not a armstrong number");
	}
}
}
