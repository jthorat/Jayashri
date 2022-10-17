#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f1,*f2,*f3;
	char ch;
	
	//open two files to be merged 
	
	f1=fopen("p1.c","r");
	f2=fopen("p2.c","r");
	
	//open file to store the result
	
	f3=fopen("p3.c","w");
	if(f1==NULL||f2==NULL||f3==NULL)
	{
		puts("could not open files");
		exit(0);
	}
	
	//copy contents of first file to file3.txt
	
	while((ch=fgetc(f1))!=EOF)
	fputc(ch,f3);
	
	//copy contents of second file to file3.txt
	
	while((ch=fgetc(f2))!=EOF)
	fputc(ch,f3);
	printf("merge p1.c and p2.c into p3.c");
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}


