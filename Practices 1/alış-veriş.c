/*SORU 3) Kullanýcýdan alýþveriþ tutarýný girmesini isteyen, alýþveriþ tutarýna göre aþaðýdaki oranlara göre indirim yaparak faturada ödemesi gereken miktarý konsola yazan programý yazýnýz.
• 0-100 arasýnda indirim yok
• 100-500 arasýnda %5 indirim
• 500-1000 arasýnda %10 indirim         i=alýþveriþtutari
• 1000 ve üzeri %15 indirim */
#include <stdio.h>

int main()
{
	int i = 0;
	
	printf("Alis-veris tutarini giriniz(TL):");
	scanf("%d",&i);
	
	if(0 < i && i < 100)
	{
		i = i - i*0/100;
		printf("Faturada odemeniz gereken miktar: %dTL",i);
	}
	else if(100 < i && i < 500)
	{
		i = i - i*5/100;
		printf("Faturada odemeniz gereken miktar: %dTL",i);
	}
	else if(500 < i && i < 1000)
	{
		i = i - i*10/100;
		printf("Faturada odemeniz gereken miktar: %dTL",i);
	}
	else if(100 <= i )
	{
		i = i - i*15/100;
		printf("Faturada odemeniz gereken miktar: %dTL",i);
	}
	
}
