/*SORU 8) Kullan�c�dan �r�n�n al�� fiyat�n� ve sat�� fiyat�n� girmesini isteyen, duruma g�re
a�a��daki 3 mesajdan birini konsola yazd�ran program� yaz�n�z.
� Bu sat��tan %X kadar kar edilmi�tir
� Bu sat��tan %X kadar zarar edilmi�tir
� Bu sat��tan ne kar ne de zarar edilmi�tir. */

#include <stdio.h>
#include <conio.h>

int main()
{
	int afiyat, sfiyat, durum = 0, kar = 0, zarar = 0;

	printf("Urunun sirasiyla alis ve satis fiyatlarini giriniz:");
	scanf("%d %d",&afiyat, &sfiyat);
	
	if(afiyat > sfiyat)
	{
		durum = afiyat - sfiyat;
		zarar = durum*100 / afiyat;
		printf("Bu satistan yuzde %d kadar zarar edilmistir.",zarar);
	}
	else if(afiyat < sfiyat)
	{
		durum = sfiyat - afiyat;
		kar = durum*100 / afiyat;
		printf("Bu satistan yuzde %d kadar kar edilmistir.",kar);
	}
	else if(afiyat == sfiyat)
	{
		printf("Bu satistan ne kar ne de zarar edilmistir.");
	}
	
	getch();

}
	// sonu� = say� * y�zde
