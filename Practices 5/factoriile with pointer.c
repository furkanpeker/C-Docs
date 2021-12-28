//SORU 3) Kullanýcýdan bir N integer deðeri girmesini isteyen ve pointer kullanarak N! deðerini hesaplayan ve sonucu ekrana yazdýran programý yazýnýz.

#include <stdio.h>
int factoriel(int N)
{
	int *p;
	p = &N;
	
	if(*p!=1)
		return *p * factoriel(*p-1);
	else	
	return 1;
	
}
int main()
{
	int N,result;
	
	printf("enter a count:");  scanf("%d",&N);
	
	result = factoriel(N);
	
	printf("factoriel of the count you entered is %d.",result);
	
	return 0;
	
}
