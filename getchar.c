#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<errno.h>
#include<stdlib.h>
//command line argument
int main(int argc,char *argv[])
{
	//variable declarition
	int fd;
	char ch;
	//file open in read mode only
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror(" file cannot open");
	}
	//read the char in the file
	read(1,&ch,1);
	printf("%c",ch);
	
}



