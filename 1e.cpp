#include<iostream>
#include<conio.h>
//BERK EMRE oZER
//1E
int main()
{
	printf("Bolum ve kalan degerlerini ekrana yazan C programi\n");
	printf("Ýlk Sayiyi giriniz:\n");
	int a,b;
	scanf("%d",&a);
	printf("Ýkinci Sayiyi giriniz:\n");
	scanf("%d",&b);
	
	int bolum,kalan;
	bolum=a/b;
	kalan=a%b;
	
	
	printf("Bolum=%d\n",bolum);
	printf("Kalan=%d\n",kalan);
	
	
	getch();
	return 0;
}
