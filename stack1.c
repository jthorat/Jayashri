#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void peek();
void display();

int main()
{
int choice;
do
{
printf("enter choice 1:push 2:pop 3:peek 4:display 5:exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
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
void push()
{
int x;
printf("enter data:");
scanf("%d",&x);
if(top==N-1)
{
printf("overflow\n");
}
else
{
top++;
stack[top]=x;
}
}

void pop()
{
int item;
if(top==-1)
{
printf("underflow\n");
}
else
{
item=stack[top];
top--;
printf("%d\n",item);
}
}

void peek()
{
if(top==-1)
{
printf("underflow\n");
}
else
{
printf("%d\n",stack[top]);
}
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}

