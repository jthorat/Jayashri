 //3. WAP our own version of cat command using mmap system call
#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include<sys/stat.h>
// command line argument
int main(int argc, char* argv[])
{
	//variable declariion
	int fd;
  	char *ch;
  	if(argc < 2)
  	{	
    		printf("file cannot open\n");
    		return 0;
  	}	
  
  	struct stat s;
	//open argv[1] file to read/write mode through the system call
  	fd = open(argv[1], O_RDWR);
  	if(fd < 0)
  	{
    		printf(" file open fails\n");
    		return -1;
  	}
     
  	// get file status  
	fstat(fd,&s);
	// mmap function calling
  	ch=mmap(0,1,PROT_READ,MAP_SHARED,fd, 0);
  	for(int i = 0;i<s.st_size;i++)
  	{
      		printf("%c",ch[i]);
  	}	
  	close(fd);
  	return 0;
}
