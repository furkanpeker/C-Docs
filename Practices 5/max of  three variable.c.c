//SORU 2) �� integer de�i�kenin en b�y�k de�erini pointer kullanarak bulan ve sonucu ekrana yazd�ran program� yaz�n�z.
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

