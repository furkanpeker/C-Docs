//SORU 14) Bir integer N de�erini kullan�c�dan girmesini isteyen ve N i�in 0'dan 9'a kadar �arp�m tablosunu ekrana yazd�ran program� yaz�n�z.
#include <stdio.h>

int main()
{
	int N, i, result=0;
	
	printf("enter a number:");
	scanf("%d",&N);
	
	for(i=0; i<=9; i++)
	{
		result = i*N;
		printf("%d * %d = %d\n",i, N, result);
	}
}
