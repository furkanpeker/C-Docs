#include <stdio.h>
int main()
{
	int ay;
	
	printf("1-12 araliginda ay numarasi giriniz:");
	scanf("%d",&ay);
	
	if(1<=ay && ay<=3)
	{
		printf("mevsim Kis");
	}
	if(4<=ay && ay<=6)
	{
		printf("mevsim Ikbahar");
	}
	if(7<=ay && ay<=9)
	{
		printf("mevsim Yaz");
	}
	if(10<=ay && ay<=12)
	{
		printf("mevsim Sonbahar");
	}
}
