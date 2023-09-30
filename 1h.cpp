#include <conio.h>
#include <iostream>
#include <stdio.h>
int main()
//BERK EMRE ÖZER
//1H
{

char s[]="KELEBEK";
int k=0;
printf("\n");
for (int i=0;i<3;i++)
{	
	
	for (int j=0;j<=i;j++)
	{
		printf("%c",s[j]);
		
	}
	for(int j=0;j<5-(i*2);j++)
	{
		printf(" ");
	}
		
		
	for (int j=0;j<=i;j++)
	{
		printf("%c",s[k]);
		if (k==4){
			printf("%c%c ",s[k+1],s[k+2]);k=9;
		}
		if (k==5){printf("%c",s[k+1]); k=-1;
		}
	}
	printf("\n");
	k+=5;
}
	
	
	
	
	for(int j=0;j<7;j++)
	{
		printf("%c",s[j]);
	}




printf("\n");
int a=1,z=4;
for (int i=1;i<4;i++)
{
	
	for (int j=0;j<7-(i+3);j++){
	printf("%c",s[j]);
	}
	
	for(int j=0;j<a;j++)
	{
		printf(" ");
	}
	for (int j=0;j<=3-i;j++)
	{
		printf("%c",s[z]);
		if (z==4){
			printf("%c%c ",s[z+1],s[z+2]);z=7;
		}
		if (z==5){printf("%c",s[z+1]); z=8;
		}
	}
	printf("\n");
	z-=2;


a=a+2;
	
	
	
	
	

}








getch();
return 0;
}
