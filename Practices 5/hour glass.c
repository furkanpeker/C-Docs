#include <stdio.h>

int main()
{
	int satir,sutun;
	
	for (satir=1;satir<=5;satir++)
	{
		for (sutun=1;sutun<satir;sutun++)
		{
			printf(" ");
		}
		for (sutun=1;sutun<=10-(satir*2-1);sutun++)
		{
			printf("*");
		}
			for (sutun=1;sutun<satir;sutun++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	
		for (satir=4;satir>=0;satir--)
	{
		for (sutun=1;sutun<=satir;sutun++)
		{
			printf(" ");
		}
		for (sutun=1;sutun<=10-(satir*2+1);sutun++)
		{
			printf("*");
		}
			for (sutun=1;sutun<=satir;sutun++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	/*Burada mant�k �u; biz simetrik bir ��gen olu�turmak i�in ya t�m sat�rlar� tek , yada �ift say�dan olu�turmal�y�z. Bunu yaparken de 
	ters ��gen yada d�z� fark etmez; ilk sat�rdaki say� de�eri i�in kullan�ca��m�z top. s�tun adedinin simetrik olarak en alt as�tdaki ssay� de�erini 
	��kartam�mz gerekir.  B�ylelikle bir �r�nt� yakalam�� oluruz. Ayn� �ekilde ikinci - d�rd�nc� vb.ikililer i�in uygular�z. Yaln�z ��yle bir durum var ;
	Biz e�er satir say�s�n� tek say� yapm�� isek o zaman ortadaki sat�r�n simetri�i olan ba�ka bir sat�r olamayacakt�r t�pk� bu �rnekte old. gibi. Bu 
	y�zden de top. s�tun say�s�ndan o sat�rdaki s�tun say�s�n� vermi� oldu�umuz dizi genel terimi ile ��karm�� olal�m ki �r�nt� aksamas�n .
	�ift say�lar i�in b�tle bie s�k�nt� olu�mayacakt�r!
    Anlat�lanlar�n ayn�s� elmas �ekli i�in de ge�erlidir. */
	
}
