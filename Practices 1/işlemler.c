//SORU 4) Kullanýcýdan iki sayý girmesini isteyen, daha sonra aþaðýdaki menüde olduðu gibi yapmak istediði iþlemi soran, son olarak iþlemin sonucunu konsola yazdýran programý yazýnýz.
//Lutfen yapmak istediginiz islemin numarasini giriniz: 1 - Toplama 2 - Cikarma 3 - Carpma 4 - Bolme 5 - Mod

#include <stdio.h>

int main()
{
	int num, sayi1, sayi2, toplam, fark, bolum, carpim, mod;
	
	printf("iki sayi girin:");
	scanf("%d %d",&sayi1, &sayi2);

	printf("Bilgi\n\n 1- Toplama\n2 - Cikarma\n3 -Carpma\n4 -Bolme\n5 - Mod\nLutfen yapmak istediginiz islemin numarasini giriniz:");
	scanf("%d",&num);
	
	if(num == 1)
	{
		toplam = sayi1 + sayi2;
		printf("Sonuc=%d",toplam); 
	}
	else if(num == 2)
	{
		if(sayi1 > sayi2)
		    fark = sayi1 - sayi2;
		else if(sayi2 > sayi1)
			fark = sayi2 - sayi1;   
			 
		printf("Sonuc=%d",fark); 
	}
	else if(num == 3)
	{
		carpim = sayi1 * sayi2;
		printf("Sonuc=%d",carpim); 
	}
    else if(num == 4)
	{
	    bolum = sayi1 / sayi2;
		printf("Sonuc=%d",bolum); 
	   
	}
	else if(num == 5)
	{
	    mod = sayi1 % sayi2 ;
		printf("Kalan=%d",mod); 
	}
}
