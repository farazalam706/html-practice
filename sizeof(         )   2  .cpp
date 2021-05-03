#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,a;
	
	x=sizeof(float);

	y=sizeof(char);
	
	z=sizeof(int);
	
	a=sizeof(double);

	printf("%d %d %d %d",x,y,z,a);
	
	getch();
	return 0;
}
