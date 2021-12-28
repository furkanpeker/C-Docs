/*Soru 10) Kullanýcýdan müþteri grubunu girmesini isteyen (A, B, C), daha sonra alýþveriþ
tutarýný soran, müþteri grubuna ve tutarýna göre aþaðýdaki indirimi uygulayýp müþterinin
ödemesi gereken tutarý a) switch-case yapýsýný b) if-else yapýsýný kullanarak yapýnýz
• A tipi için 0-100 %5, 100-500 %10, 500 üzeri %15
• B tipi için 0-100 %7.5, 100-500 %12.5, 500 üzeri %17.5
• C tipi için 0-100 %10, 100-500 %15, 500 ve üzeri %20 */
// b)
#include <stdio.h>
#include <conio.h>

int main()
{
	float tutar, odeme = 0;
	char grup;
	float indirim = 0;
		
	printf("(A/B/C)musteri grubu numaranizi girin:"); scanf("%s",&grup);
	
	printf("alisveris tutari:"); scanf("%f",&tutar);
/*	
	if(grup == 'A')
	{
		if(0 <= tutar && tutar < 100)
		{
			indirim = tutar * 5/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
		else if(100 <= tutar && tutar < 500)
		{
			indirim = tutar * 10/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
		else if(500 <= tutar)
		{
			indirim = tutar * 15/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
	}
	else if(grup == 'B')
	{
		if(0 <= tutar && tutar < 100)
		{
			indirim = tutar * 7.5/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
		else if(100 <= tutar && tutar < 500)
		{
			indirim = tutar * 12.5/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
		else if(500 <= tutar)
		{
			indirim = tutar * 17.5/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
	}
	else if(grup == 'C')
	{
		if(0 <= tutar && tutar < 100)
		{
			indirim = tutar * 10/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
		else if(100 <= tutar && tutar < 500)
		{
			indirim = tutar * 15/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
		else if(500 <= tutar)
		{
			indirim = tutar * 20/100;
			odeme = tutar - indirim;
			printf("odemeniz gereken tutar: %f TL dir.",odeme);
		}
	}
	
	getch();
*/
//a)
	switch(grup)
	{
		case 'A':
			if(0 <= tutar && tutar < 100)
			{
				indirim = tutar * 5/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			else if(100 <= tutar && tutar < 500)
			{
				indirim = tutar * 10/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			else if(500 <= tutar)
			{
				indirim = tutar * 15/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			break;
		
		case 'B':
			if(0 <= tutar && tutar < 100)
			{
				indirim = tutar * 7.5/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			else if(100 <= tutar && tutar < 500)
			{
				indirim = tutar * 12.5/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			else if(500 <= tutar)
			{
				indirim = tutar * 17.5/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}	
			break;
			
		case 'C':
			if(0 <= tutar && tutar < 100)
			{
				indirim = tutar * 10/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			else if(100 <= tutar && tutar < 500)
			{
				indirim = tutar * 15/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			else if(500 <= tutar)
			{
				indirim = tutar * 20/100;
				odeme = tutar - indirim;
				printf("odemeniz gereken tutar: %f dir.",odeme);
			}
			break;
	}
	
	getch();

}
