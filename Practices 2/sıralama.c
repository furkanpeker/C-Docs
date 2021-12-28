#include <stdio.h>
#include <conio.h>

void  kucuktenbuyuge(int sayi1,int sayi2)
{
	int sayac = sayi1;
	
	while(sayi1<=sayac && sayac<=sayi2)
	{
		printf("%d ",sayac);
		sayac ++; 
	}
	
} 
int main()
{
	int sayi1, sayi2 , sonuc;
	
	printf("iki tam sayi giriniz:"); 
	scanf("%d %d",&sayi1,&sayi2);
	
	kucuktenbuyuge(sayi1,sayi2);
	getch();
	
	return 0;
	
}
