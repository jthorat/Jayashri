// program to demonstrate producer_consumer problem using synchronization
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

//global variable declarition
int count=0;
char buffer[5];

//producer function declarition
void *producer(void  *arg)
{
	//variable declarition
	int in=0;
	char ch='a';
	while(1)
	{
		while(count==5);
		buffer[in]=ch;
		in=(in+1)%5;
		sleep(1);
		if(in==0)
		{
			ch='a';
			printf("producer:%s\n",buffer);
		}
		else
		{
			ch++;
		}
		count++;

	}
	// exit to the producer thread
	pthread_exit(exit);
}


//consumer function declarition            
void *consumer(void  *arg)
{
	// variable declarition
	int out=0;
	char data[5];
	while(1)
	{
		while(count==0);
		data[out]=buffer[out];
		out=(out+1)%5;
		sleep(1);
		if(out==0)

			printf("consumer:%s\n",data);
		count--;

	}
	//exit to the consumer thread
	pthread_exit(exit);
}


//main function
int main (int argc, char *argv[])
{
	//variable declarition
	pthread_t p1, p2;

	//create the producer thread
	if (pthread_create(&p1, NULL, &producer, NULL) != 0)
	{
		perror("thread create failed");
		return 1;
	}

	// create the consumer thread
	if (pthread_create(&p2, NULL, &consumer, NULL) != 0)
	{
		perror("thread create failed");
		return 2;
	}



	// producer and consumer threads are joining 
	if (pthread_join(p1, NULL) != 0)
	{
		perror("thread failed to join");
		return 3;



	}
	if (pthread_join(p2, NULL) != 0)
	{
		perror("thread failed to join");
		return 4;
	}
	return 0;
}


