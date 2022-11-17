/* Insert node in a given linked list */

#include<stdio.h>
#include<stdlib.h>

// Function declarition
struct student* add_first(struct student* head);
struct student* add_last(struct student* head);
struct student* add_given_location(struct student*head);
void display(struct student*head);

//structure declarition
struct student
{
    int roll;
    char name[20];
    struct student*link;
};

// main program
int main()
{
    struct student*head=NULL;
    int choice;
    while(1)
    {
        printf("enter choice 1:add first 2:add last 3:add given location 4:display 5: exit\n");
        printf("enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=add_first(head);
            break;
            case 2:head=add_last(head);
            break;
            case 3:head=add_given_location(head);
            break;
            case 4:display(head);
            break;
            case 5:exit(0);
        }
    }
}


struct student* add_first(struct student* head)
{
    struct student*newnode=NULL,*temp=NULL;
    newnode=(struct student*)malloc(sizeof(struct student));
    if(newnode==NULL)
    {
        printf("node not created\n");
    }
    else
    {
        printf("enter roll no:");
        scanf("%d",&newnode->roll);
        printf("enter name:");
        scanf("%s",newnode->name);
        newnode->link=head;
        head=newnode;
    }
    return head;
}


struct student* add_last(struct student* head)
{
    struct student*newnode=NULL,*temp=NULL;
    newnode=(struct student*)malloc(sizeof(struct student));
    if(newnode==NULL)
    {
        printf("node not created\n");
    }
    else
    {
        printf("enter the roll no:");
        scanf("%d",&newnode->roll);
        printf("enter the name:");
        scanf("%s",newnode->name);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->link!=NULL)
            {
                  temp=temp->link;
            }
            temp->link=newnode;
        }
     }
     return head;
}


struct student* add_given_location(struct student*head)
{
    int pos,i;
    struct student* newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    if(newnode==NULL)
    {
        printf("node not created\n");
    }
    else
    {
        printf("enter the roll no:");
        scanf("%d",&newnode->roll);
        printf("enter the name:");
        scanf("%s",newnode->name);
        printf("enter position:");
        scanf("%d",&pos);
        struct student *temp=head;
        for(i=2;i<pos;i++)
        {
            if(temp->link!=NULL)
            temp=temp->link;
        }
        newnode->link=temp->link;
        temp->link=newnode;
    }
    return head;
}


void display(struct student* head)
{
    if(head==NULL)
    {
        printf("link is empty\n");
    }
    else
    {
        while(head)
        {
              printf("%d %s\n",head->roll,head->name);
              head=head->link;
        }
    }
}
