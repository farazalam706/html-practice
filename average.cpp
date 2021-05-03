#include<stdio.h>
#include<conio.h>
int main()
{
	int average,a,b;
	printf("Enter your first number : ");
	scanf("%d",&a);

	printf("Enter your second number : ");
	scanf("%d",&b);

	average = (a+b)/2;
	
	printf("average of your number is : %d",average); //here, we show the outpur of sum
	
	getch();
	return 0;
}
