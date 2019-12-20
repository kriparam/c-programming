#include<conio.h>
#include<stdio.h>
int main()
{
	unsigned long int i=1,r=1;
	while(i<=64)
	{
		r=2*r;
		printf("\n%d",r);
		i++;
	}
	getch();
}
