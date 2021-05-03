#include<stdio.h>
#include<conio.h>
int main()
{
	int x=1,y;
	while(x<=5)
	{
	printf("Enter a number :");
	scanf("%d",&y);		
	if(y>0)
	{
	break;
}
else
	x++;
	}
y==6?printf("Ends Normally"):printf("Applied break");

	getch();
	return 0;
}
