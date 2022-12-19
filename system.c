//WAP your own version of system() library?

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>

void my_system(char *);

 
//main function
int main(int argc, char* argv[])
{
    // function calling
    my_system(argv[1]);
    exit(0);
}

 
// function defination 
void my_system(char * buff)
{
    //variable declarition
    pid_t pid;
    int ret, status;
    pid = fork();
    if (pid == 0)
    {
        ret = execl("/bin/sh", "sh", "-c", buff, (char*) NULL);
        if (ret == -1)
        {
            perror("Execve fails");
            exit(0);
        }
    }
    else
    {
        wait(&status);
    }
}
