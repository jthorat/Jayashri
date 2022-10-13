#include<stdio.h>
#include<stdlib.h>
struct node
{	
	int data;
	struct node*next;
};
void push(struct node**head,int newdata)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=(*head);
	(*head)=newnode;
}
int nth_last_node(struct node* head,int index)
{
	struct node* current=head;
	int count=0;
	while(current!=NULL)
	{
		if(count==index)
		return(current->data);
		count++;
		current=current->next;
	}
}
int main()
{
	struct node*head=NULL;
	push(&head,12);
	push(&head,41);
	push(&head,11);
	push(&head,22);
	push(&head,33);
	printf("element at index 2 is %d\n",nth_last_node(head,2));
}



