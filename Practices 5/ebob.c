/*�ki integer say�y� parametre olarak alan ve bu iki say�n�n en b�y�k ortak b�lenini
(EBOB) bularak return eden fonksiyonu yaz�n�z.*/

#include <stdio.h>

int main()
{
	int n, m, sonuc=1, kucuksayi, i;
	
	printf("iki sayi girin: ");
	scanf("%d %d",&n, &m);
	
	if(n<m)
		kucuksayi=n;
	else
		kucuksayi=m;
		
	for(i=2; i<=kucuksayi; i++)
	{
		if(n % i==0 && m % i == 0)
		{
			sonuc = i;
		}
	} 
	
	printf("%d ve %d nin en buyuk ortak boleni : %d",n,m,sonuc);
}
