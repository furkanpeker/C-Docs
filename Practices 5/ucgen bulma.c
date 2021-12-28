/*SORU 9) Kullanýcýdan üçgenin üç kenar uzunluðunu girmesini isteyen, tüm kenar
uzunluklarý birbirine eþitse konsola "EÞKENAR ÜÇGEN", sadece iki kenar uzunluðu
birbirine eþitse "ÝKÝZKENAR ÜÇGEN", üç kenar uzunluðu da birbirinden farklýysa
"ÇEÞÝTKENAR ÜÇGEN" yazdýran programý yazýnýz. */
#include <stdio.h>
#include <conio.h>

int main()
{
	 int kenar1, kenar2, kenar3;
	 
	 printf("Ucgenin uc kenar uzunlugunu da giriniz:");
	 scanf("%d %d %d",&kenar1, &kenar2, &kenar3);
	 
	 if(kenar1 == kenar2 && kenar1 == kenar3)
	 {
	    if(kenar3 == kenar2)	
		{
			printf("Ucgen, eskenar ucgendir.");	
		}
	 }
	 else if(kenar1 == kenar2 || kenar2== kenar3 || kenar3 == kenar1) 
	 {
	 	printf("ucgen ikizkenar ucgendir.");
	 }
	 else 
	 {
	 	printf("ucgen cesitkenar ucgendir.");
	 }
	 
	 getch();
}
