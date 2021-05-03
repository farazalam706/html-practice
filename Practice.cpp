#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	
	printf("Hello\n");
	printf("\nWhat is your name?");
	printf("\n 1.Arkam? \n 2.Junaid?\n\n");
	
	scanf("%d",&y);
	
	if(y==1)
	{
		
		printf("\nHi How are you Arkam?\n");
	}
	else if(y==2)
	{
		printf("\nHi How are you Junaid?\n");
	}
	else
	{
		printf("You entered the uncorrect number");
	}
	scanf("%d");
	
	printf("\nSssssssssssssuperbbbbbb!");
	
	getch();
	return 0;
}

