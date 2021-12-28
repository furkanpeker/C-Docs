//SORU 2) Üç integer deðiþkenin en büyük deðerini pointer kullanarak bulan ve sonucu ekrana yazdýran programý yazýnýz.
#include <stdio.h>
int max(int *a, int *b, int *c)
{
	if(*a < *b && *c < *b)
		return *b;
	else if(*b < *c && *a < *c)	
		return *c;
	else
		return *a;
	
	return 0;
}
int main()
{
	
	int a, b, c, maxi;
	
	printf("enter three number:");
	scanf("%d %d %d",&a,&b,&c);
	
	maxi = max(&a, &b, &c);
	if(maxi > 0)
		printf("the max number is %d",maxi);
	else
		return 0;

	
	
}

