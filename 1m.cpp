#include <conio.h>
#include <iostream>
int main()
//BERK EMRE OZER
//1M
{

printf("Onceden tanimli tek boyutlu bir dizideki elemanlarin varyansini hesaplayan C++ programi\n");

int s[10]={71,14,44,22,11,99,33,11,34,66};

int toplam=0;
for (int i=0;i<10;i++)
{
	toplam+=s[i];
}
int ort=toplam/10,fark=0;
for(int i=0;i<10;i++)
{
	fark=fark+(s[i]-ort)*(s[i]-ort);
}
int varyans=fark/10;
printf("Varyans=%d\n",varyans);






getch();
return 0;
}
