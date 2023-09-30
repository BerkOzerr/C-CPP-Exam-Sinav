#include <conio.h>
#include <iostream>
int main()
//BERK EMRE �ZER
//1N
{

printf("Disaridan girilen sayidan sonra ki 5 asal sayiyi ekrana yazan C++ programi\n");
int s,A=1,j=0;
printf("Sayi Giriniz:\n");
scanf("%d",&s);

if(s==0 || s==1){
	
	printf("Sonraki Asal Sayi:2\n");
	printf("Sonraki Asal Sayi:3\n");
	printf("Sonraki Asal Sayi:5\n");
	printf("Sonraki Asal Sayi:7\n");
	printf("Sonraki Asal Sayi:11\n");
	
	getch();
	return 0;
	
}

do
{
	A=1;
	s++;
	for(int i=s-1;i>1;i--)
	{
		if(s%i==0) A=0;
	}
	if(A==1)
	{
		printf("Sonraki Asal Sayi:%d\n",s);
		j++;
	}
}while(j<5);
getch();
return 0;

}
