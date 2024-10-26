#include <stdio.h>
#include <stdlib.h>
int data;
int pos;

struct node{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* addToEmpty(struct node* head,int data);
struct node* addToBeg(struct node* head, int data);
struct node* addToEnd(struct node* head, int data);
struct node* addAtPos(struct node* head, int data);
struct node* delLast(struct node* head);
struct node* delFirst(struct node* head);
struct node* delRandom(struct node* head,int pos);

int main(){
    int choice;
    struct node* head = NULL;
    struct node* ptr;
    printf("1. Add to an empty list.\n 2. Add at the beginning.\n 3. Add at end.\n 4. Enter at any random position.\n5. Delete from first.\n 6. Delete from last.\n 7.Delete from any random location.\n");
    printf("Enter any choice: ");
    scanf("%d ",&choice);
    switch(choice){
        case 1:
            printf("Enter a number: ");
            scanf("%d",&data);
            head = addToEmpty(head,data);
            ptr=head;
            while(ptr->next != NULL){
                printf ("%d  ",ptr->data);
                ptr= ptr->next;
            }
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d",&data);
            head = addToBeg (head,data);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d",&data);
            head = addToEnd (head,data);
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d",&data);
            head = addAtPos (head,data);
            break;
        case 5:
            head = delFirst(head);
            break;
        case 6:
            head = delLast(head);
            break;
        case 7:
            printf("Enter a position: ");
            scanf("%d",&pos);
            head = delRandom(head,pos);
            break;
        case 8:
            exit(0);
            break;
    }

    ptr=head;
    while(ptr->next != NULL){
        printf ("%d  ",ptr->data);
        ptr= ptr->next;
    }
    return 0;
}
struct node* addToEmpty(struct node* head, int data){
    struct node* temp = malloc (sizeof(struct node));
    temp-> prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
struct node* addToBeg (struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head= temp;
    return head; 
}
struct node* addToEnd(struct node* head, int data){
    struct node* tp;
    struct node* temp = malloc (sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tp = head;
    while (tp->next!=NULL)
        tp = tp->next;
    tp->next = temp;
    temp->prev= tp;
    return head;
}
struct node* addAtPos(struct node* head, int data){
    int pos;
    struct node* temp = head;
    struct node* temp2= NULL;
    struct node* newP = NULL;
    temp=head;
    newP = addToEmpty(newP,data);
    printf("Enter your position: ");
    scanf("%d",&pos);
    for (int i=0; i<pos; i++)
        temp = temp->next;
    if (temp->next == NULL){
        temp->next = newP;
        newP->prev = temp;
    }
    else{
        temp2 = temp->next;
        temp->next = newP;
        temp2->prev = newP;
        newP->next = temp2;
        newP->prev = temp;
    }
    return head;
}
struct node* delFirst(struct node* head){
    struct node* ptr;
    ptr=head;
    head=ptr->next;
    free(ptr);
    head->prev = NULL;
    return head;
}
struct node* delLast(struct node* head){
    struct node* temp;
    while(temp->next->next!=NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
    return head;
}
struct node* delRandom(struct node* head,int pos){
    struct node* temp;
    struct node* temp2;
    temp=head;
    for(int i=0; i<pos; i++)
        temp=temp->next;
    temp2=temp->prev;
    temp2->next=temp->next;
    temp->next = temp2->next;
    return head;
}
