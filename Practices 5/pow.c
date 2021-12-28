//SORU 15) X ve Y þeklinde iki integer deðeri kullanýcýdan girmesini isteyen, X üssü Y deðerini (XY) hesaplayarak sonucu ekrana yazdýran programý yazýnýz.
#include <stdio.h>

int main()
{
	int x, y, pow=1, i;
	
	printf("enter two values for calculate the power: ");
	scanf("%d %d",&x, &y);
	
	for(i=0; i<y; i++)
	{
		pow = x*pow;
	}
	
	printf("%d^%d = %d",x, y, pow);
}
