/*SORU 2) Kullanýcýdan vize, final ve proje notunu girmesini isteyen, daha sonra girilen notlarý aþaðýdaki formüle göre aðýrlýklý ortalamasýný hesaplayýp, eðer öðrenci 50 ve üzeri not ortalamasýna sahip olursa konsola "GECTI", 50’nin altýnda ortalamasý olursa "KALDI" yazan programý yazýnýz.
Aðýrlýklý ortalama = 0.3*vize + 0.2*proje + 0.5*final */
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

