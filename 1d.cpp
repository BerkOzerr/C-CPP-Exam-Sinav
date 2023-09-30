#include<iostream>
#include<conio.h>
//BERK EMRE ÖZER
//1D
int main()
{
	printf("n sayisindan sonra gelen ilk 10 cift sayiyi ekrana yazan C programi\n");
	int n;
	printf("Sayi giriniz:\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		for (int i=1;i<=10;i++)
		{
			n=n+2; printf("%d\n",n);
		}
	}
	else if (n%2==1) 
	{
		n=n+1;
		printf("%d\n",n);
		for (int i=1;i<10;i++) 
		{
			n=n+2; printf("%d\n",n);
		}
	}
	
	getch();
	return 0;
		
}
