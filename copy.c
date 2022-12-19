//4. Write an Linux System Programming copy one file content to another file using mmap() system call.

#include<stdlib.h> 
#include<string.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/mman.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
     
     if(argc<3)
     {
     printf("ERROR:Less argument passed\n");
     return 0;
     }
    // Declaration of variables 
    int source, destination;
    char *sou, *dest;
    // stat is used to find the size of an file
    /* SOURCE */ 
    struct stat s;   
    //opening and Reading an file  
     source = open(argv[1], O_RDONLY);
     
     // calculating the size of source file
     int size = lseek(source,0,SEEK_END);
     
     // mapping the source file     
     sou = mmap(NULL, 1, PROT_READ, MAP_PRIVATE, source, 0);
     
     // creating an destination file
     destination = creat(argv[2], 0777);
     // allocating the size of des_file by calculating the size of source_file
     ftruncate(destination, size);
     // Opening an destination file in read/write mode
     destination= open(argv[2], O_RDWR | O_CREAT ,0777);
     
     // mapping destination file
     dest = mmap(NULL, 1, PROT_READ | PROT_WRITE, MAP_SHARED, destination, 0);
    
    /* COPY */
    /* from source to destination , number of bytes*/
    for(int i = 0; i<size; i++)
    {
        write(destination,&sou[i], 1);
    }
    
    // unmapping the files from source
    munmap(sou, s.st_size);
    munmap(dest, s.st_size);
  
    close(source);
    close(destination);

 

   return 0;
}
