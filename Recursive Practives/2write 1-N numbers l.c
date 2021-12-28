#include <stdio.h>
#include <conio.h>

int yazdir(int iSayi,int n)
{
	int iSonuc;
	
	printf("%d\n",iSayi);
	
	if(iSayi!=n)
	    iSonuc = iSayi + yazdir(iSayi+1,n);
	else
		iSonuc = n;
	
	return iSonuc;
}


int main(void)
{
	int iSayi=0;

	printf("Sayiyi giriniz:");
	scanf("%d",&iSayi);
	
	
	
	printf("1 den %d e kadar sayilarin yazimi ;\n",iSayi);
	
	yazdir(1,iSayi);

	getch();
	return 0;	
}
