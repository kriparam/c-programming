#include<stdio.h>
#include<conio.h>
int main()
{
	float p,r,t,SI,A;
	printf("p=");
	scanf("%f",&p);
	printf("r=");
	scanf("%f",&r);
	printf("t=");
	scanf("%f",&t);
	SI=(p*r*t)/100;
	printf("SI=%f\n",SI);
	A=SI+p;
	printf("A=%f",A);
	getch();
}
