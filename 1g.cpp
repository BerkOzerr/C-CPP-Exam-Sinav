#include <conio.h>
#include <iostream>
int main()
//BERK EMRE ÖZER
//1G
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



int z=1;
printf("\n");

for (int i=1;i<n-3;i++)
{
	
	for (int j=0;j<n-(i+3);j++){
	printf("*");
	}
	
	for(int j=0;j<z;j++)
	{
		printf(" ");
	}
	for(int j=0;j<n-(i+3);j++)
	{
		printf("*");
	}
z=z+2;
	printf("\n");
	
	
	

}








getch();
return 0;
}
