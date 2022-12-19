// touch command

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>

//command line argument
int main(int argc,char *argv[])
{
	if(argc != 2)
	{
		printf("./a.out filename");
		return 0;
	}
	
	//variable declarition
	int in;
	//open file in read mode and write mode by using user
	in=open(argv[1],O_RDWR|O_CREAT,S_IRUSR|S_IWUSR);
	//close file
	close(in);
	return 0;
}
