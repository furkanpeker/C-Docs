/*Bir integer N de�erini parametre olarak alan ve 1�den N�ye kadar olan say�lar�
recursive olarak (d�ng� kullanmadan) ekrana yazd�ran metodu yaz�n�z.*/
#include <stdio.h>
#include <conio.h>

int numbers(int N)
{
	 
	 if(N == 1)
	 	return 1;
	 	
	return N; 
	numbers(N-1);
}

int main()
{
	int N, result;
	
	printf("enter a count:");
	scanf("%d",&N);
	
	result = numbers(N);
	
	printf("%d",result);
}
