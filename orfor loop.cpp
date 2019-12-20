#include<stdio.h>
#include<conio.h>
void ram()
{
	int i=1,n,fact=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	fact=fact*i;
}
	printf("factorial=%d",fact);
}
int main()
{
	ram();
}
