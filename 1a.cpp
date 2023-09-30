#include<iostream>
#include<conio.h>
//BERK EMRE OZER
//1A

int main()
{

	printf("1'den 1000'e kadar olan sayilarin toplamini  bulan C programi\n");
	int i,t=0;
	for(i=1;i<=1000;i++)
	{
		t+=i;
	}
	printf("%d\n",t); 
	getch();
	return 0;
	
}

