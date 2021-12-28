#include <stdio.h>

int main()
{
	FILE *f1, *f2;
	char name[10], surname[10], num[10], work[10];
	
	f1=fopen("source.txt","r");
	f2=fopen("goal.txt","w");
	while(!feof(f1))
	{
		fscanf(f1,"%s %s %s %s",name,surname,num,work); 
		fprintf(f2,"%s - %s %s, %s\n",num,name,surname,work);
	}
	
	fclose(f1);
	fclose(f2);
}
