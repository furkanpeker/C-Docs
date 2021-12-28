#include <stdio.h>

float calculatecircle(float radius,float circle)
{
	const float pi=3.14;
	
	circle = 2*pi*radius;
	return circle;
}

int main()
{
	float radius; 
	float circle;
	
	printf("enter the radius:");
	scanf("%f",&radius);
	
	circle = calculatecircle(float radius,float circle);
	
	printf("circle is %f .",circle);
	return 0;
}
