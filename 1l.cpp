#include <conio.h>
#include <iostream>
#include <stdlib.h>
int main()
//BERK EMRE oZER
//1L		
{

printf("Iki matrisin carpimi sonucunda olusan ucuncu matrisi yazan C programi\n");
printf("onceden tanimli denmedigi icin degerleri lutfen giriniz\n");
int m[3][2],mA[2][3],mC[3][3];

for (int i=0;i<3;i++)
{
	for (int j=0;j<2;j++){
	
	printf("Ilk matris:%dx%d\n",i+1,j+1);
	scanf("%d",&m[i][j]);}
}

	for (int i=0;i<2;i++)
{
	for (int j=0;j<3;j++){
	
	printf("Ikinci matris:%dx%d\n",i+1,j+1);
	scanf("%d",&mA[i][j]);}
}
system("CLS");
int toplam=0;


for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
    
      for(int k=0;k<2;k++){
      
      toplam+=m[i][k]*mA[k][j];
  }
  mC[i][j]=toplam;
  toplam=0;
  printf("%d\t",mC[i][j]);
  }
  printf("\n");
  }
printf("\n");

getch();
return 0;
}
