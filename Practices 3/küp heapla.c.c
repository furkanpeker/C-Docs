#include <stdio.h>

int kuphesapla(int sayi,int kup)
{
	kup = sayi*sayi*sayi;
	return kup ;
}
int main()
{
	int sayi,kup;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	kup= kuphesapla(sayi,kup);
	printf("%d sayisinin kupu = %d",sayi,kup);
	return 0;
}

