//3. WAP - producer consumer problem using Pthreads, semaphores and Mutex

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
#include<string.h>

//global variablr declarition
int count=0;
char buffer[6];
sem_t empty;
sem_t full;
pthread_mutex_t produce;
pthread_mutex_t consume;


//producer1 function block
void *producer1(void  *arg)
{
	//variable declarition
	int in=0;
	char ch='a';
	while(1)
	{
		// locking the producer1 thread using semaphore and mutex
		sem_wait(&empty);
		pthread_mutex_lock(&produce);
		buffer[in]=ch;
		in=(in+1)%6;
		sleep(0.5);
		if(in==0)
		{
			ch='a';
			printf("producer 1:%s\n",buffer);
		}
		else
		{
			ch++;
		}
		//unlock the producer1 thread 
		pthread_mutex_unlock(&produce);
		sem_post(&full);
	}
	pthread_exit(exit);
}

//producer2 function block
void *producer2(void *arg)
{
	//variable declarition
	int in=0;
	char ch='A';
	while(1)
	{
		//lock the producer2 thread
		sem_wait(&empty);
		pthread_mutex_lock(&produce);
		buffer[in]=ch;
		in=(in+1)%6;
		sleep(0.5);
		if(in==0)
		{
			ch='A';
			printf("producer 2:%s\n",buffer);
		}
		else
		{
			ch++;
		}
		//unlock the producer2 thread
		pthread_mutex_unlock(&produce);
		sem_post(&full);
	}
	pthread_exit(exit);
}



//consumer function block
void *consumer(void  *arg)
{
	//variable declarition
	int out=0;
	char data[6];
	while(1)
	{
		// lock the consumer thread
		sem_wait(&full);
		pthread_mutex_lock(&consume);
		data[out]=buffer[out];
		out=(out+1)%6;
		//    sleep(1);
		if(out==0)
			printf("\tconsumer:%s\n",data);
		//unlock the consumer thread
		pthread_mutex_unlock(&consume);
		sem_post(&empty);

	}
	pthread_exit(exit);
}


//main function
int main (int argc, char *argv[])
{

	//variable declarition
	pthread_t p1, p2,p3;

	//semaphore initialize full and empty
	sem_init(&full,0,0);
	sem_init(&empty,0,6);
	// mutex is initialize producer and consumer threads
	pthread_mutex_init(&produce,NULL);
	pthread_mutex_init(&consume,NULL);

	// create thread and calling the producer1 function block
	if (pthread_create(&p1, NULL, &producer1, NULL) != 0)
	{
		perror("thread create failed");
		return 1;
	}


	// create thread and calling the producer2 function block
	if (pthread_create(&p2, NULL, &producer2, NULL) != 0)
	{
		perror("thread create failed");
		return 2;
	}

	//create thread and calling the consumer function block
	if(pthread_create(&p3,NULL,&consumer,NULL)!=0)
	{
		perror("thread create failed");
		return 3;
	}



	// join the threads
	if (pthread_join(p1, NULL) !=0 )
	{
		perror("thread failed to join");
		return 4;



	}
	if (pthread_join(p2, NULL) != 0)
	{
		perror("thread failed to join");
		return 5;
	}

	//destroying the full and empty after process complete
	sem_destroy(&full);
	sem_destroy(&empty);
	//destroying the produce and consume after process complete
	pthread_mutex_destroy(&produce);
	pthread_mutex_destroy(&consume);

	return 0;
}
