#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,A,S,M,D,R,choice;
	printf("enter two numbers\n");
	scanf("%d%D",&a,&b);
	printf("1.addition:\n");
	printf("2.substraction\n");
	printf("3.multi\n");
	printf("4.division\n");
	printf("5.reminder\n");
	printf("enter yourr choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		
		      A=a+b;
		      printf("Addition =%d\n",A);
		      break;
		case 2:
			S=a-b;
			printf("sub.=%d\n",S);
			break;
		case 3:
			M=a*b;
			printf("multi=%d\n",M);
			break;
		case 4:
			D=a/b;
			printf("div.=%d\n",D);
			break;
		case 5:
			R=a%b;
			printf("reminder=%d\n",R);
			break;
		default:
			printf("Invalid input");
}
	getch();
	
}
