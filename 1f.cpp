#include <conio.h>
#include <iostream>
int main()
//BERK EMRE OZER
//1F
{

int n=7;
for (int i=0;i<n-3;i++)
{	
	
	for (int j=0;j<i;j++)
	{
		printf("*");
		
	}
	for(int j=0;j<n-(i*2);j++)
	{
		printf(" ");
	}
		
		
		for(int j=0;j<i;j++)
	{
		printf("*");
	}	
	printf ("\n");
	


	
}
	
	
	
	
	for(int j=0;j<n;j++)
	{
		printf("*");
	}






getch();
return 0;
}
