/*SORU 18) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn kaç basamaklý
olduðunu hesaplayarak sonucu ekrana yazdýran programý yazýnýz.
SORU 19) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn rakamlarýnýn
toplamýný hesaplayarak sonucu ekrana yazdýran programý yazýnýz.*/
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

