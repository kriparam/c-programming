#include<stdio.h>
#include<conio.h>
int main()
{
	int ex;
	float total_amount,salary;
	printf("enter your working years :\n");
	scanf("%d",&ex);
	printf("%d",ex);
	
	if(ex>10){
		printf("enter your salary\n");
		scanf("%f",&salary);
		total_amount=salary+(salary*0.1)+5000;
		printf("your salery is:%f",salary);
		printf("your total salary is%f\n",total_amount);
	}
	else
	{
		printf("enter your salary\n");
		scanf("%f",&salary);
		printf("your salary amount =%f\n",salary);
		total_amount=salary+(salary*0.05)+5000;
		printf("your total salery amount is:%f\n",total_amount);
}
	getch();
}
