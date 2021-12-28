//SORU 14) Bir integer N deðerini kullanýcýdan girmesini isteyen ve N için 0'dan 9'a kadar çarpým tablosunu ekrana yazdýran programý yazýnýz.
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
