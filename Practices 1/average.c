/*SORU 2) Kullan�c�dan vize, final ve proje notunu girmesini isteyen, daha sonra girilen notlar� a�a��daki form�le g�re a��rl�kl� ortalamas�n� hesaplay�p, e�er ��renci 50 ve �zeri not ortalamas�na sahip olursa konsola "GECTI", 50�nin alt�nda ortalamas� olursa "KALDI" yazan program� yaz�n�z.
A��rl�kl� ortalama = 0.3*vize + 0.2*proje + 0.5*final */
#include <stdio.h>

int main()
{
	float vize, final, proje, agort = 0;
	
	printf("Sirasi ile vize, final ve proje notunuzu giriniz:");
	scanf("%f %f %f",&vize, &final, &proje);
	
	agort = 0.3*vize + 0.2*proje + 0.5*final;
	
	if(agort >= 70)
	{
		printf("Tebrikler gectiniz!");
	}	
	else
	{
		printf("HAh HAH Haaa Kaldin!");
	}
	
}

