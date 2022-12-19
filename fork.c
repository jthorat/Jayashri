// fork() command
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
//	printf("hello world\n");
	vfork();
	 printf("hello world\n");
	 printf("my pid is %d\n",getpid());


}
