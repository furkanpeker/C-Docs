/*SORU 11) Bir integer N deðerini kullanýcýdan girmesini isteyen ve 1'den N'ye kadar olan
sayýlarý toplayýp sonucu ekrana yazdýran programý a)fonksiyonsuz b)normal fonksiyon ile c) recursive fonksiyon ile yazýnýz. */
#include <stdio.h>
#include <conio.h>
/* a)
int main()
{
	int N, i, toplam = 0;
	printf("sayi giriniz:");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++)
	{
		toplam = toplam + i;
	}
	printf("1 den N ye kadar sayilarin toplami %d dir.",toplam);
}*/

/*b)

int topla(int N)
{	
	int i, toplam=0;
	
	for(i=1; i<=N; i++)
	{
		toplam = toplam + i;
	}

	return toplam;
}

int main()
{
	int N, i, toplam;
	printf("sayi giriniz:");
	scanf("%d",&N);
	
	toplam = topla(N);
	printf("1 den N ye kadar sayilarin toplami %d dir.",toplam);
}
*/

int topla(int N)
{
	if(N == 1)
		return 1;

	
	return N + topla(N-1);
}

int main()
{
	int N, toplam;
	
	printf("sayi giriniz:");
	scanf("%d",&N);
	
	toplam = topla(N);
    printf("1 den N ye kadar sayilarin toplami %d dir.",toplam);
    
    getch();
}

