#include <stdio.h>
#include <conio.h>
/*int f(int N)
{
	if(N>0)
		return 1+f(N/10);
	else
		return 0;
}
int main()
{
	int N, bas=0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&N);
	
	bas=f(N);
	
	printf("%d sayisi %d basamaktan olusmaktadir.",N, bas);
	
	getch();
	
	return 0;
}*/

int ebob(int s1, int s2)
{
	if(s2==0)
	{
		return s1;	
	}
	else
		return ebob(s2, s1%s2);
}
int main()
{
	int n, m, sonuc;
	printf("iki adet sayi girin: "); scanf("%d %d",&n, &m);
	
	sonuc= ebob(n, m);
	printf("obeb(%d,%d) = %d",n,m,sonuc);
	
	getch();
	
	return 0;
}
