#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
}*head, *last;


void create(int n);
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
printf("Enter the no of nodes :\t");
scanf("%d", &n);
create(n);
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
void create(int n)
{
    struct node *newNode;
    if(n>=1){
        head=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data of first node: \t");
        scanf("%d", &head->data);
        head->prev=NULL;
        head->next=NULL;
        last=head;
    int i;
    for(i=2; i<=n;i++){
        newNode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data of %d node : \t", i);
        scanf("%d", &newNode->data);
        newNode->prev=last;
        newNode->next=NULL;
        last->next=newNode;
        last=newNode;
    }
    }
}

void display(){
    struct node *temp;
    if(head==NULL){
        printf("List is Empty\n");
        return;
    }
    else{
        temp=head;
        printf("Data in the list is: \n");
        while(temp!=NULL){
            printf("%d \n", temp->data);
            temp=temp->next;
        }
    }
}

void reverseList(){
    struct node *current, *temp;
    current=head;
    while(current!=NULL){
        temp=current->next;
        current->next=current->prev;
        current->prev=temp;
        current=temp;
    }
    temp=head;
    head=last;
    last=temp;
    printf("Linked list reversed successfully");
}

