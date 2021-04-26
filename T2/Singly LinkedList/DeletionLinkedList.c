/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//deleting node at first place

// struct Node * firstDelete(struct Node *head){
//     struct Node *ptr=head;
//     head=head->next;
//     free(ptr);
//     return head;
// }


// deletion of a Node when index is given

// struct Node * deleteAtSpecific(struct Node *head, int index){
    
//     struct Node *p =head;
//     struct Node *q;
//     for(int i = 0 ; i< index-1 ; i++){
//         p=p->next;
//     }
//     q = p -> next;
//     p -> next = q -> next;
//     free(q);
//     return head;
// }


// deleting last element

// struct Node * deleteLast(struct Node *head){
//     struct Node *p = head;
//     struct Node *q = head -> next;
//     while(q -> next != NULL){
//         p = p-> next;
//         q = q-> next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }

struct Node * deleteSpecificNode(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next != NULL){
        q = q -> next;
        p = p -> next;
    }
    
    if(q->data = value){
        p->next = q->next;
        free(q);
    }
        
    return head;
    
}



int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;
    
    
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));


    head->data=5;
    head->next=second;
    
    second->data = 3;
    second->next = third;
    
    third->data = 8;
    third->next = fourth;
    
    fourth->data = 1;
    fourth->next = fifth;
    
    fifth->data = 6;
    fifth->next= NULL;
    
    
    printf("linked list before deletion:\n");
    traversal(head);
    
    // head = firstDelete(head);
    // head = deleteAtSpecific(head,2);
    // head = deleteLast(head);
    head = deleteSpecificNode(head,1);
    
    printf("linked list after deletion:\n");
    traversal(head);
    return 0;
}
