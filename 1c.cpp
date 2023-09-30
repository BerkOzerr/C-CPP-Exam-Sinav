#include<iostream>
#include<conio.h>
//BERK EMRE ÖZER
//1C
int main()
{
	
	printf("Girilen bir sayinin asal olma durumunu ekrana yazan C programi\n");
	int i,n,sonuc=0;
	printf("Sayi Giriniz:");
	scanf("%d",&n);
	for (int i=n-1;i>1;i--)
	{
		if(n%i==0) sonuc=1;
		 
	} 
	if (n==1) sonuc=1;
	if (sonuc==0) printf("ASALDIR\n");
	else printf("ASAL DEGILDIR\n");
	
	
	
	getch();
	return 0;
}
