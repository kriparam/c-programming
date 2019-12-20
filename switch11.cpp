#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,A,S,M,D,ch;
	printf("\n1.Addition");
	printf("\n2.Substration");
	printf("\n3.Multification");
	printf("\n4.divition");

	printf("\nEnter  your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter two no.");
			scanf("%d%d",&a,&b);
			A=a+b;
			printf("Addition is:%d",A);
			break;
		case 2:
				printf("\nEnter two no.");
			scanf("%d%d",&a,&b);
			S=a-b;
			printf("Substration is:%d",S);
			break;
		case 3:
			printf("\nEnter two no.");
			scanf("%d%d",&a,&b);
			M=a*b;
			printf("multification is:%d",M);
			break;
		case 4:
			printf("\nEnter two no.");
			scanf("%d%d",&a,&b);
			D=a/b;
			printf("Division is:%d",D);
			break;
		default:
		printf("invalid choice");			
	}

}
