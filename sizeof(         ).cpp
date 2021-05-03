#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	
	x=sizeof(float);
	printf("%d",x);

	x=sizeof(char);
	printf("%d",x);
	
	x=sizeof(int);
	printf("%d",x);
	
	x=sizeof(double);
	printf("%d",x);
	
	getch();
	return 0;
}
