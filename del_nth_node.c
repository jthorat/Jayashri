#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};


struct node* create(struct node* head,int x)
{
	struct node* temp,*ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
	return head;
}


struct node*remove_nth_from_node(struct node* head,int b)
{
	int len=0,diff,i;
	struct node* temp=head;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	if(b>len)
	{
		printf("length of linked list is %d",len);
		printf("we can't remove %dth node from the ",b);
		printf("linked list\n");
		return head;
	}
	else if(b==len)
	{
		return head->next;
	}
	else
	{
		diff=len-b;
		struct node*prev=NULL;
		struct node*curr=head;
		for(i=0;i<diff;i++)
		{
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
		return head;
	}
}


void display(struct node* head)
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}



int main()
{
	int n;
	struct node* head=NULL;
	head=create(head,1);
	head=create(head, 15);
	head=create(head, 10);
	head=create(head, 12);
	head=create(head, 19);
	head=create(head, 16);
	n=4;
	printf("linked list before modification:\n");
	display(head);
	head=remove_nth_from_node(head,4);
	printf("linked list after modification\n");
	display(head);
}



