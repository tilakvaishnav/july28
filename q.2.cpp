#include<stdio.h>
int main()
{
	int a=121,rem=0,res=0;
	int n=a;
	{
	while(n!=0)
	{
		rem=n%10;
		res=res*10+rem;
		n=n/10;
	}
	if(res==a)
	{
		printf("the number is a palindrome number");
	}
	else
	{
		printf("the number is not  a palindrome");
	}
}
}
