/*SORU 9) �ki integer parametre alan ve bu iki de�i�kenin de�erini kal�c� olarak birbiriyle
de�i�tiren fonksiyonu yaz�n�z. (Bu fonksiyon �a��r�ld�ktan sonra, main'de de�i�kenlerin
de�erlerleri de�i�mi� olarak kalmal�d�r.)*/
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
