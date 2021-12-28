/*SORU 1) Kullanýcýdan 0-100 aralýðýnda notunu girmesini isteyen ve aþaðýdaki aralýklara göre Harf notunu konsola yazdýran programý yazýnýz.
• 85-100 -> A
• 70-85 -> B
• 55-70 -> C
• 40-55 -> D
• 0-40 -> F*/
#include <stdio.h>
int main()
{
	int not;
	printf("0-100 araliginda bir not girin:");
	scanf("%d",&not);
	
	if(85 <= not && not <= 100)
	{
		printf("Harf notunuz: A\n");
	}
	else if(70 <= not && not < 85)
	{
		printf("Harf notunuz: B\n");
	}
	else if(55 <= not && not < 70)
	{
		printf("Harf notunuz: C\n");
	}
	else if(40 <= not && not < 55)
	{
		printf("Harf notunuz: D\n");
	}
	else if(0 <= not && not <= 40)
	{
		printf("Harf notunuz: F\n");
	}
	
}
