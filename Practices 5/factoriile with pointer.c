//SORU 3) Kullan�c�dan bir N integer de�eri girmesini isteyen ve pointer kullanarak N! de�erini hesaplayan ve sonucu ekrana yazd�ran program� yaz�n�z.

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
