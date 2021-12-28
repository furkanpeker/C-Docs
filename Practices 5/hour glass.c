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
	/*Burada mantık şu; biz simetrik bir üçgen oluşturmak için ya tüm satırları tek , yada çift sayıdan oluşturmalıyız. Bunu yaparken de 
	ters üçgen yada düzü fark etmez; ilk satırdaki sayı değeri için kullanıcağımız top. sütun adedinin simetrik olarak en alt asıtdaki ssayı değerini 
	çıkartamımz gerekir.  Böylelikle bir örüntü yakalamış oluruz. Aynı şekilde ikinci - dördüncü vb.ikililer için uygularız. Yalnız şöyle bir durum var ;
	Biz eğer satir sayısını tek sayı yapmış isek o zaman ortadaki satırın simetriği olan başka bir satır olamayacaktır tıpkı bu örnekte old. gibi. Bu 
	yüzden de top. sütun sayısından o satırdaki sütun sayısını vermiş olduğumuz dizi genel terimi ile çıkarmış olalım ki örüntü aksamasın .
	Çift sayılar için bötle bie sıkıntı oluşmayacaktır!
    Anlatılanların aynısı elmas şekli için de geçerlidir. */
	
}
