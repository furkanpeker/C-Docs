#include <stdio.h>
#include <conio.h>


int asal(int x)
{
	int sayac;
	int asallik = 1; // asal

	for (sayac = 2; sayac < x; sayac++)
	{
	    if (x % sayac == 0)
		{
			asallik = 0;
		}
	}

	return asallik;
}


/*
int asal1(int x)
{	
	int sayac;
	for(sayac = 2; sayac < x; sayac++)
	{
	    if (x % sayac == 0)
		{
			 return 0;
		}
	}

	return 1;
}

*/

int main()
{
	int x, asalmi;

	printf("x tam sayisini girin:");
	scanf("%d",&x);

	asalmi = asal(x);
	if (asalmi == 1)
	{
		printf("asaldir.");
	}
	else
	{
		printf("degildir");
	}
	getch();
	
	return 0;
}
