/*SORU 9) Ýki integer parametre alan ve bu iki deðiþkenin deðerini kalýcý olarak birbiriyle
deðiþtiren fonksiyonu yazýnýz. (Bu fonksiyon çaðýrýldýktan sonra, main'de deðiþkenlerin
deðerlerleri deðiþmiþ olarak kalmalýdýr.)*/
#include <stdio.h>

int swapping(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	return a,b;
}

int main()
{
	int a, b;
	
	printf("enter two number: ");
	scanf("%d %d",&a, &b);
	
	swapping(&a,&b);
	printf("first vaiable is %d\nsecond variable is %d",a,b);

}
