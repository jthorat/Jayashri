//1. Write a C program that makes a copy of a file using standard I/O and system calls. Explain the Difference between System Call and Standard Library.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main(int argc,char *argv[])
{
	//variable declarition
	FILE *fp1,*fp2;                   
	char buff[500],c;
	// open the file1 in read mode
	fp1=fopen(argv[1],"r");
	if(fp1==NULL)
	{
		printf("file not open\n");
	}
	//open file2 in write mode
	fp2=fopen(argv[2],"w");
	if(fp2==NULL)
	{
		printf("file not open\n");

	}
	//file1 content store in c variable
	c=fgetc(fp1);
	while(c!=EOF)
	{
		//write char by char in file2
		fputc(c,fp2);
		c=fgetc(fp1);
	}
	//close the files
	fclose(fp1);
	fclose(fp2);
}
