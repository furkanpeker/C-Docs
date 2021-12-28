#include <stdio.h>

int main()
{
	int dizi[10], i, j, maxsayac=0, sayac=0, boyut, mod;
	
	printf("dizi boyutu: ");
	scanf("%d",&boyut);
	
	for(i=0; i< boyut; i++)
	{
		printf("dizi[%d]: ",i);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0; i< boyut; i++)
	{
		for(j=0; j< boyut; j++)
		{
			if(dizi[i] == dizi[j])
			{
				sayac++;
			}
		}
		
		if(maxsayac < sayac) {
			maxsayac = sayac;
			mod=dizi[i];
		}
		sayac=0;
	}
	
	printf("dizinin en cok tekrar eden %d elemaninin tekrar sayisi: %d",mod, maxsayac);
	
}
