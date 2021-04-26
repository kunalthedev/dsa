/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void traversal( struct Node *ptr){
    while(ptr!=NULL){
        printf("Elements are: %d\n", ptr->data);
        ptr=ptr->next;
    }
};


// struct Node * first(struct Node *head, int data){
    
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->data=data;
    
//     ptr->next=head;
//     return ptr;
    
// }

// struct Node * last(struct Node *head, int data){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->data=data;
//     struct Node * p=head;
    
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }

    // struct Node * middle(struct Node *head, int data, int index){
    //     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    //     ptr->data=data;
    //     struct Node *p = head;
    //     int i=0;
        
    //     while (i!=index-1)
    // {
    //     p = p->next;
    //     i++;
    // }
    //     ptr->next=p->next;
    //     p->next=ptr;
    //     return head;
    // }
    
    struct Node * insertAfterNode(struct Node * head,struct Node *prevNode,int data){
        struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
        ptr->data=data;
        
        ptr->next=prevNode->next;
        prevNode->next=ptr;
        
        return head;
    }

    
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
    head->data = 7;
    head->next = second;
    
    second->data = 11;
    second->next = third;
    
    third->data = 41;
    third->next = fourth;
    
    fourth->data = 66;
    fourth->next = NULL;
    
    printf("Before inertion\n");
    traversal(head);
    printf("After inertion\n");
    // head=first(head,569);
    // head=last(head,569);
    // head=middle(head,569,2);
    head=insertAfterNode(head,third,2);
    traversal(head);    
        
    return 0;
}
