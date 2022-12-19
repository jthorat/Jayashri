//2. Write a program to read framebuffer fixed size information?
//Hint: Device name is /dev/fb0.
    
#include<stdio.h>
#include<fcntl.h>
#include<sys/ioctl.h>
#include<linux/fb.h>
int main(int argc, char *argv[])
{
	//variable declarition
       	int fd1;
	
	//argv[1] has in format /dev/fb0
	fd1 = open (argv[1], O_RDONLY);
	if(fd1 < 3)
	{
        	printf("Open Fails");
        	return -1;
    	}

	// screen information
    	struct fb_var_screeninfo var;
        //function call to get visible screen information    
    	ioctl(fd1, FBIOGET_VSCREENINFO,&var);
    	//visible resolution 
	printf("visiable resolution x-axis: %u\n", var.xres);
	printf("visiable ressolution y-axis: %u\n", var.yres);
    	printf("bits per pixel: %u\n", var.bits_per_pixel);
    
    	return 0;
}
