//SORU 15) X ve Y �eklinde iki integer de�eri kullan�c�dan girmesini isteyen, X �ss� Y de�erini (XY) hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.
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
