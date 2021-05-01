#include <stdio.h>
#include <stdlib.h>
void create();
void traversal();
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


int main()
{
    
    printf("Kunal Arora 2k20CSUN01059\n");
    
    int choice;
    while(1){
        printf("\n Enter the operation u want to perform \n");
        printf("1. Creation \n");
        printf("2. Display \n");
        printf("3. Exit \n");
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
            exit(0);
        }
    }
    
    
    // traversal(head);
    
    traversal();
    return 0;
}
