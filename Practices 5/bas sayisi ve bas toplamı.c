/*SORU 18) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n ka� basamakl�
oldu�unu hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.
SORU 19) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n rakamlar�n�n
toplam�n� hesaplayarak sonucu ekrana yazd�ran program� yaz�n�z.*/
#include <stdio.h>
/*
int main()
{
	int n, bas;
	
	printf("enter a value: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n = n/10;
		bas++;
	}	
	printf("number of digit: %d",bas);
}
*/
int main()
{
	int n, total=0;
	
	printf("enter a count: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		total = total + n%10;
		n = n/10;
	}	
	
	printf("total of numbers of this count is %d.",total);
}

