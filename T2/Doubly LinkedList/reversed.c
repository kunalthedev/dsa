#include <stdlib.h>
#include <stdio.h>

/*
* Basic structure of Node
*/
struct node {
int data;
struct node * prev;
struct node * next;
}*head, *last;

/*
* Functions used in this program
*/
void createList(int n);
void display();
void reverseList();

int main()
{
int n, data, choice=1;
head = NULL;
last = NULL;
/*
* Runs forever until user chooses 0
*/
while(choice != 0)
{
printf("============================================\n");
printf("DOUBLY LINKED LIST PROGRAM\n");
printf("============================================\n");
printf("1. Create List\n");
printf("2. Reverse List\n");
printf("3. Display list\n");
printf("0. Exit\n");
printf("--------------------------------------------\n");
printf("Enter your choice :" );
scanf("%d", &choice);
switch(choice)
{
case 1:


createList();
break;
case 2:
reverseList();
break;
case 3:
display();
break;
case 0:
break;
default:
printf("Error! Invalid choice. Please choose between 0-3");
}
printf("\n\n\n\n\n");
}
return 0;
}

/**
* Creates a doubly linked list of n nodes.
* @n Number of nodes to be created
*/


/**
* Display the content of the list from beginning to end
*/
void createList()
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data for node \n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        temp=head;
        newnode=head;
    }
    else
    {
        temp=head;
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
void display()
{
    struct node * temp;
    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("%d\n",temp->data);

        temp = temp->next;
        }
    }
}

/**
* Reverse order of the doubly linked list
*/
void reverseList()
{

struct node *current, *temp;
current = head;
while(current != NULL)
{
/*
* Swap the previous and next address fields of current node
*/
temp = current->next;
current->next = current->prev;
current->prev = temp;
/* Move the current pointer to next node which is stored in temp */
current = temp;
}
/*
* Swap the head and last pointers
*/
temp = head;
head = last;
last = temp;
printf("LIST REVERSED SUCCESSFULLY.\n");
}
