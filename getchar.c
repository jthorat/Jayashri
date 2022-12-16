#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<errno.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int fd;
	char ch;
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror(" file cannot open");
	}
	read(1,&ch,1);
	printf("%c",ch);
	
}



