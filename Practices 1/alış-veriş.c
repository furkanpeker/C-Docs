/*SORU 3) Kullan�c�dan al��veri� tutar�n� girmesini isteyen, al��veri� tutar�na g�re a�a��daki oranlara g�re indirim yaparak faturada �demesi gereken miktar� konsola yazan program� yaz�n�z.
� 0-100 aras�nda indirim yok
� 100-500 aras�nda %5 indirim
� 500-1000 aras�nda %10 indirim         i=al��veri�tutari
� 1000 ve �zeri %15 indirim */
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
