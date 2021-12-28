#include <stdio.h>
#include <conio.h>

int calculateafunction(int a,int b,int x)
{
	int iresult=0;
	if(x<5)
	{
		iresult= 2*a + b*x;
	}
	else
	{
		iresult= 3*x - a*b;
	}	
	return iresult;
}

int main()
{
	int isabit1, isabit2, ix;
	int iresult=0;
	
	printf("sirasiyle a b ve x degerlerini girin:");
	scanf("%d %d %d",&isabit1,&isabit2,&ix);
	iresult = calculateafunction(isabit1,isabit2,ix);
	printf("Fonksiyonun sonucu: %d",iresult);
	getch();
}
	
	//x<5  2*a + b*x;
	//x>=5 3*x - a*b;
