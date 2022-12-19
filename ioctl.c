//1. Write a program show the /dev/input/event0 device name?


#include<stdio.h>/
#include<fcntl.h>
#include <linux/input.h>
//command line argument
int main(int argc, char *argv[])
{
	//variable declarition
	int fd1, retfd;
	char name[256];

	//argv[1] has in format /dev/input/event0

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 3)
	{
		printf("Open Fails");
		return -1;
	}
	//function call to get device name
	ioctl(fd1, EVIOCGNAME(sizeof(name)), name);
	printf("Input device name: \"%s\"\n", name);

	return 0;
}
