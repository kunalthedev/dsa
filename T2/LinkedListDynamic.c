#include <stdio.h>
#include <stdlib.h>
void create();
void traversal();
void insertNodeAtBeginning();
//void deleteEND();
void product_nodes();
void exit(int status);

struct Node{
  int info;
  struct Node *next;
};
struct Node *start=NULL;


void traversal(){
    struct Node *ptr;
    if(start==NULL){
        printf("list is empty");
        return;
    }
    else{
        ptr=start;
        printf("the list elements are: \n");
        while(ptr!=NULL){
            printf("%d \t \n", ptr->info);
            ptr=ptr->next;
        }
    }
}
void product_nodes(){
   int product=1;
   temp=head;
   while(temp!=NULL){
      product=product * (temp->data);
      temp=temp->next;
   }
   printf("\nproduct of nodes is : %d" ,product);
}
void create(){
    struct Node *temp, *ptr;
    temp=(struct Node *)malloc(sizeof(struct Node));
    printf("enter the data for the Node: \n");
    scanf("%d" , &temp->info);
    temp->next =NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void insertNodeAtBeginning()
{
    struct Node *newNode, *ptr;

    newNode = (struct node*)malloc(sizeof(struct Node));
    printf("enter the data for the Node: \n");
        scanf("%d" , &newNode->info);

    if(ptr == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {

       // newNode->info = info; // Link data part
        newNode->next = start; // Link address part

        start = newNode;          // Make newNode as first node

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
int main()
{

    printf("Swastik 2k20CSUN01107\n");

    int choice;
    while(1){
        printf("\n Enter the operation u want to perform \n");
        printf("1. Creation \n");
        printf("2. Display \n");
        printf("3. insertion at the begining \n");
        printf("4. Delete from the end \n");
        printf("4. Exit \n");
        printf("Enter Your choice \n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            create();
            break;

            case 2:
            traversal();
            break;

            case 3:
            product_nodes();
            break;

           // case 4:
           // deleteEND();
          //  break;

            case 5:
            exit(0);
        }
    }


    // traversal(head);

    traversal();
    return 0;
}
