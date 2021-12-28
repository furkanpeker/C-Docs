#include <stdio.h>

float calculatearound(int radius)
{
	float around;
	const float pi =3.14;
	
	around = 2*pi*radius;

	return around;
}
float calculatearea(int radius)
{
	float area;
	const float pi =3.14;
	
	area = radius*pi*radius;
	return area;
}
int main()
{
	int radius;
	float area , around;
	
	printf("enter the radius:");
	scanf("%d",&radius);
	
	around = calculatearound(radius);
	printf("around:%f\n",around);
						
	area = calculatearea(radius);
	printf("area: %f",area);

	
}
