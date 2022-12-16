//3. Write a system programming your own version of echo command?

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include<string.h>

//command line arguments
int main(int argc,char *argv[])
{
	//variable declarition
	int count=0,cnt=0;

	if(argc<2)
	{
		perror("file cannot open");
	}


	// print the same string
	for(cnt=1;cnt<argc;cnt++)
	{
		write(1,argv[cnt],strlen(argv[cnt]));
	        write(1," ",1);
	}
}

	
