/*Kullanicimiz, float tipinde 10 adet deger girsin. Önce bu degerlerin ortalamasi bulunsun, ardindan hangi elemanlarin ortalamanin altinda kaldigi ve 
hangi elemanlarin ortalamanin üstünde oldugu gösterilsin.*/
#include <stdio.h>
#include <conio.h>



int main()
{
	int indis, ort, toplam = 0;
	int dizi[10];
	
	for(indis = 0; indis < 10; indis++)
	{
		printf("%3d.degeri girin: ",(indis+1)); 
		scanf("%d",&dizi[indis]);
	
		toplam = toplam + dizi[indis];
	}
	
	ort = toplam / 10;
	
	printf("\nortalama = %d\n",ort);

	printf("\nOrtalamanin altinda kalanlar\n\n");
	
	for(indis = 0; indis < 10; indis++)
	{
		if(dizi[indis] < ort)
		{
			printf("%3d.eleman",(indis+1));
		}
	}
	
	printf("\n\nOrtalamanin ustunde olanlar\n\n");
	
	for(indis = 0; indis < 10; indis++)
	{
		if(dizi[indis] > ort)
		{
			printf("%3d.eleman",(indis+1));
		}
	}
	getch();

	return 0;
}

