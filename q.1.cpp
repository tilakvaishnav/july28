#include<stdio.h>
int main()
{
	for(int i=0;i<=100;i++)
	{
		if(i%5==0 && i%11==0)
		{
			printf("%d",i);
		}
	}
}
