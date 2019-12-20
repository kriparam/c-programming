#include<stdio.h>
#include<conio.h>
int main()
{
	int experiance,salary,total;
	printf("salary:");
	scanf("%d",&salary);
	printf("experiance:");
	scanf("%d",&experiance);
	if(experiance>=10)
	{
		total=salary+(salary*.1)+5000;
		printf("total=%d",total);
		
    }
	else
	{
	total=salary+(salary*0.05)+5000;
	printf("total=%d",total);	
    }
	getch();
}
