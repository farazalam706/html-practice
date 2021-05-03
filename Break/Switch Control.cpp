#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,x,a,b,c,d,i,f;
	while(1)
	{
		printf("\n1. Subraction");
		printf("\n2. Odd or Even");
		printf("\n3. Print N numbers");
		printf("\n4. Exit");

		printf("\nEnter your choice :");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				printf("Enter two Numbers :");
				scanf("%d%d",&a,&b);
				sum=a+b;
				printf("Your sum of that two numbers is : %d",sum);
			break;
		
			case 2: 
				printf("Enter a number :");
				scanf("%d",&c);
				if(c%2==0)
				{
					printf("Even Number");
				}
				else
				{
					printf("Odd Number");
				}
 			break;

			case 3:	
				printf("Enter a number :");
				scanf("%d",&d);	
				for(i=1;i<=d;i++)
				{
					printf("%d",i);
				}
			break;
	
			case 4:
				break;
			default :
			{
				printf("You entered the wrong number.");
			}
		}
	}
	getch ();
	return 0;
}
