//SORU 17) Bir integer N de�erini kullan�c�dan girmesini isteyen ve bu say�n�n 2'nin �ss� olup olmad���n� (1, 2, 4, 8, 16, 32, ... , 1024, ...) kontrol eden; 
//2'nin �ss� ise ka��nc� �ss� oldu�unu, de�ilse -1 ekrana yazd�ran program� yaz�n�z
#include <stdio.h>

int main()
{
	int N, i;
	
	printf("enter a count:");   scanf("%d",&N);
	
	if(N%2==0 && ?)
	{
		for(i=1; i<=N; i++)
		{
			N=N/2;
		}
		printf("this number is %d.power of 2.",i-1);
	}
	else
	{
		printf("-1");
	}
}
