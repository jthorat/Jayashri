//6. Write a system programming your own version of du command?

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

// command line argument  
int main(int argc, char const *argv[])
{

	//variable declarition
	int fd1 ; 
	float fd2 , ret ;
	struct stat statbuf;
	ret = stat(argv[1],&statbuf);
	// store the file size in statbuf 
	fd2 = (statbuf.st_blksize);
	printf("%ld\t %s\n",statbuf.st_blocks/2, argv[1]);
	return 0;
}
