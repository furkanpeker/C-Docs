#include <stdio.h>

int main()
{
	FILE *fp;
	
	char row[50];
	int i=0;
	
	if((fp=fopen("row.txt","r"))!= NULL)
	{
		do {
			fgets(row,50,fp);
			i++;
		}while(!feof(fp));
	}
	else
	{
		printf("the file has not found!");
	}
	
	printf("the file has %d row.",i);
	fclose(fp);
}

// We got a result: fgets function reads just a row. Meaning; when you arrived the end of row, the end of row sign is waited there until you skip the row.
