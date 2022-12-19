//program to demonstrate odd and even using mutex
    
#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

// global variable declarition
pthread_mutex_t  mutex;
int min,max;

// defination of even and odd
void *routine() 
{


    //locking the mutex
    pthread_mutex_lock(&mutex);
    for (; min <= max;) 
    {
        //loginc for even number
        if(min % 2 == 0)
	{
             printf("e=%d\n",min);
	 
	}
	
	//logic for odd number
	if(min%2==1)
	{
              printf("o=%d\n",min);
	    
	}
	min++;        
    }
    //unlocking the mutex
    pthread_mutex_unlock(&mutex);
}

//main function
int main() 
{
    //variable declarition
    pthread_t t1, t2;
    printf("enter min and max value: ");
    scanf("%d%d",&min,&max);
    
    //create the thread1 and thread2 and calling the routine function
    if (pthread_create(&t1, NULL, &routine, NULL) != 0) 
    {
        return 1;
    }
    if (pthread_create(&t2, NULL, &routine, NULL) != 0) 
    {
        return 2;
    }


    //join the thread 1 and thread 2 
    if (pthread_join(t1, NULL) != 0) 
    {
        return 5;
    }
    if (pthread_join(t2, NULL) != 0) 
    {
        return 6;
    }
    
    //destroy the threads
    pthread_mutex_destroy(&mutex);

    return 0;
}
