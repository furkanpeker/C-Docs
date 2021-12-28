#include <stdio.h>
#include <conio.h>

int main()
{
	int isayi, Sayi, itoplam=0,iortalama;
	printf("sayiyi giriniz:");
	scanf("%d",&Sayi);
	
	for (isayi=1;isayi<=Sayi;isayi++)
	{
		itoplam+= isayi;
	}
	iortalama= itoplam/Sayi; 
	
	printf("1 den %d e kadar olan sayilarin toplami %d dir.\n",Sayi,itoplam);
	printf("1 den %d e kadar olan sayilarin ortalamasi %d dir.",Sayi,iortalama);
}

