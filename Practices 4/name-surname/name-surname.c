#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *file;
	char name[20], surname[20];
	int i, n;
	
	file = fopen("people.txt","w");
	
	printf("enter a number of person:"); scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("name-surname:"); scanf("%s %s",name,surname);
		
		fprintf(file,"name-surname: %s %s\n",name,surname);
	}
	fclose(file);
	getch();
}
