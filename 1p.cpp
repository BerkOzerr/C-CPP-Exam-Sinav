#include<iostream>
#include<conio.h>
//BERK EMRE ÖZER
//1P
int main()
{
	
	printf("Girilen sayinin carpanlarini bulan c++ programi\n");
	printf("Sayi Giriniz:\n");
	
	int s;
	scanf("%d",&s);
	if(s==0)
	{
		printf("Bu sayinin carpanini size söylemem mümkün mü? 0 mi yani ?\n");
		getch();
		return 0;
	}
	int sonuc;
	printf ("carpanlar:%d",s);
	for (int i=2;i<=s;i++){
		if (s%i==0){
		sonuc=s/i;
		printf ("\ncarpanlar:%d",sonuc);
	}
		
	}
	
	getch();
	return 0;
	
}
