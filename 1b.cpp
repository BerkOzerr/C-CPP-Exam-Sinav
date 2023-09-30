#include<iostream>
#include<conio.h>
//BERK EMRE OZER
//1B

int main()
{
		
	
		printf("Fibonacci serisi elemanini ekrana yazan C programi\n");
	int e1=0,e2=1,sonuc,i,n;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	printf("%d\n",e1);
	for (i=2;i<n;i++)
		{
			sonuc=e1+e2; e1=e2; e2=sonuc;
			if (n>1) printf("%d\n",e1,e2);
		}
		if(n==2)sonuc=1;
		printf("%d\n",sonuc);
		getch();
		return 0;
}
