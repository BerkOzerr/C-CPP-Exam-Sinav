#include<iostream>
#include<conio.h>
//BERK EMRE ÖZER
//1O
int main()
{
	
	printf("Disardidan girilen iki sayinin obeb ve okekini bulan c++ programi\n");
	int s1,s2;
	printf("Ýlk sayiyi giriniz:\n");
	scanf("%d",&s1);
	printf("Ýkinci sayiyi giriniz:\n");
	scanf ("%d",&s2);
	for (int i=1;i<=s1*s2;i++)
	{
		if (i%s1==0  &&  i%s2==0 )
		{
			printf("OKEK:%d\n",i);
			break;
		}
}
    int enb;
	
	
	if (s1>s2) 
	enb=s1;
    else enb=s2;
    if(s1==1 && s2==1)printf("OBEB:1");
    
	
	
    
    
	for(int i=enb;i>=1;i--)
    {
    	if(s1%i==0 && s2%i==0)
    	{
    		printf("OBEB:%d\n",i);
    		break;
		}
	}






	getch();
	return 0;
	
}
