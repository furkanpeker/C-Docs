/*SORU 9) Kullan�c�dan ��genin �� kenar uzunlu�unu girmesini isteyen, t�m kenar
uzunluklar� birbirine e�itse konsola "E�KENAR ��GEN", sadece iki kenar uzunlu�u
birbirine e�itse "�K�ZKENAR ��GEN", �� kenar uzunlu�u da birbirinden farkl�ysa
"�E��TKENAR ��GEN" yazd�ran program� yaz�n�z. */
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
