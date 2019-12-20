#include<conio.h>
#include<stdio.h>
int main()
{
	int i,result;
	
	for(i=2;i<=64;i++)
	{
		result=2*result;
		printf("\ni%d=result%d",i,result);
	}
	
	getch();
}
