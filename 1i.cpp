#include <conio.h>
#include <iostream>
int main()
//BERK EMRE ÖZER
//1I
{



printf("\n");
int n=7,z=1;
for (int k=0;k<n+3;k++){

    for (int i=1;i<z;i++)
	{
	printf (" ");
	}
	for(int j=0;j<n;j++)
	{
		printf("*");
	}
	for(int j=1;j<z;j++)
	{
		printf(" ");
	}
	
	z++;
	n=n-2;
	printf("\n");
	if (z>7) break;
	
}
int s=3,b=1;
for (int k=0;k<7;k++){
	
	for (int i=0;i<s;i++)
	{
		printf(" ");
	}
	for(int i=0;i<b;i++)
	{
		printf("*");
	}
	for(int i=0;i<s;i++)
	{
		printf(" ");
	}
	printf("\n");
	b=b+2;
	s-=1;
	if (s==0) break;
}


for (int i=0;i<7;i++)
{
	printf("*");
}







getch();
return 0;
}
