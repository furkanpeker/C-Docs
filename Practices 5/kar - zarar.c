/*SORU 8) Kullanýcýdan ürünün alýþ fiyatýný ve satýþ fiyatýný girmesini isteyen, duruma göre
aþaðýdaki 3 mesajdan birini konsola yazdýran programý yazýnýz.
• Bu satýþtan %X kadar kar edilmiþtir
• Bu satýþtan %X kadar zarar edilmiþtir
• Bu satýþtan ne kar ne de zarar edilmiþtir. */

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
	// sonuç = sayý * yüzde
