#include<stdio.h>
#include<conio.h>
int main()
{
	float age;
	printf("Enter your age in year");
	scanf("%f",&age);
	if(age>=18)
	{
		printf("eligible");
	}
	else
	{
		printf("not eligible");
	}
	getch();
}
