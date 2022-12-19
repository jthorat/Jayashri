//#implement a thread safe function

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

//global declaration
char * HELLO_MESSAGE; 
//int THREADS_CREATED = 0; 

//declare the function 1
void * workerThreadFunc(void * tid)
{

	HELLO_MESSAGE = "HELLO WORLD!";
}

// declare the function 2
void * workerThreadFunc2(void * tid)
{

	for(int i = 0; i < 13; i++)
	{
		printf("%c ",HELLO_MESSAGE[i]); 
	}
}

//main function
int main()
{

	// variable declarition
	pthread_t tid0;
	pthread_t tid1; 
	// create the two threads
	pthread_create(&tid0,NULL,workerThreadFunc,NULL);//(void *)&tid0
	pthread_create(&tid1,NULL,workerThreadFunc2,NULL);//(void *)&tid1
	//execution for specified period
	sleep(1);
	pthread_exit(NULL);
	return 0;
}
