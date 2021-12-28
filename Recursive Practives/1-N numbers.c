/*Bir integer N değerini parametre olarak alan ve 1’den N’ye kadar olan sayıları
recursive olarak (döngü kullanmadan) ekrana yazdıran metodu yazınız.*/
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
