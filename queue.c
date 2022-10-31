/* Implement queue in c */

#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int rear=-1;
int front=-1;
void enqueue(int );
void dequeue();
void peek();
void display();

int main()
{
    int choice;
    int data,x;
    do
    {
        printf("enter choice 1:enqueue 2:dequeue 3:peek 4:display 5:exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue(x);
            break;
            case 2:dequeue();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            case 5:exit(0);
        }
    }
    while(choice!=0);
}


void enqueue( int x)
{
    printf("enter data:");
    scanf("%d",&x);
    if(rear==N-1)
    {
        printf("queue is full\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}


void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("underflow condition\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("%d\n",queue[front]);
        front++;
    }
}


void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("underflow condition\n");
    }
    else
    {
        printf("%d\n",queue[front]);
    }
}


void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("que is empty\n");
    }
    else
    {
        for(i=front;i<rear+1;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
