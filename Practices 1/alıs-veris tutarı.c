/*Soru 10) Kullan�c�dan m��teri grubunu girmesini isteyen (A, B, C), daha sonra al��veri�
tutar�n� soran, m��teri grubuna ve tutar�na g�re a�a��daki indirimi uygulay�p m��terinin
�demesi gereken tutar� a) switch-case yap�s�n� b) if-else yap�s�n� kullanarak yap�n�z
� A tipi i�in 0-100 %5, 100-500 %10, 500 �zeri %15
� B tipi i�in 0-100 %7.5, 100-500 %12.5, 500 �zeri %17.5
� C tipi i�in 0-100 %10, 100-500 %15, 500 ve �zeri %20 */
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
