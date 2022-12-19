//4. WAP create two threads using pthreads and print even no and odd no alternatively.

#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

//global variable declarition
int min,max;

//function defination for even numbers
void* even() 
{
	for (; min <= max;) 
	{
		if(min % 2 == 0)
		{
			printf("e=%d\n",min);
			min++;
			sleep(1);
		}
	}
}

//function defination  for odd numbers
void* odd() 
{
	for (; min <= max;) 
	{
		if(min % 2 == 1)
		{
			printf("o=%d\n",min);
			min++;
			sleep(1);
		}
	}
}


//main function
int main(int argc, char *argv[]) 
{

	//threads declaration
	pthread_t t1, t2;
	printf("enter min and max value: ");
	scanf("%d%d",&min,&max);
	//function calling to even numbers
	if (pthread_create(&t1, NULL, &even, NULL) != 0) 
	{
		return 1;
	}
	//function calling to odd numbers
	if (pthread_create(&t2, NULL, &odd, NULL) != 0) 
	{
		return 2;
	}


	//join the thread 1 for blocking the thread 1
	if (pthread_join(t1, NULL) != 0) 
	{
		return 5;
	}
	// join the thread 2 for blocking the thread 2
	if (pthread_join(t2, NULL) != 0) 
	{
		return 6;
	}

	return 0;
}
