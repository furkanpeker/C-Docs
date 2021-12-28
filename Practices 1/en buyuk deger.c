//SORU 5) Kullanýcýdan 3 sayý girmesini isteyen ve girilen 3 sayýnýn en büyük deðerini bulup konsola yazdýran programý yazýnýz.
#include <stdio.h>
int main()
{
	int a, b, c, max= 0;
	
	printf("lutfen 3 tane sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("%d en buyuktur.",a);
	}
	else if(b>c && b>a)
	{
		printf("%d en buyuktur.",b);
	}
	else
	{
		printf("%d en buyuktur.",c);
	}
}
