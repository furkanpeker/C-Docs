//SORU 5) Kullan�c�dan 3 say� girmesini isteyen ve girilen 3 say�n�n en b�y�k de�erini bulup konsola yazd�ran program� yaz�n�z.
#include <stdio.h>
int main()
{
	int a, b, c, max= 0;
	
	printf("lutfen 3 tane sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("%d en buyuktur.",a);
	}
	else if(b>c && b>a)
	{
		printf("%d en buyuktur.",b);
	}
	else
	{
		printf("%d en buyuktur.",c);
	}
}
