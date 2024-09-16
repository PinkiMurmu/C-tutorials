#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* AddToEmpty(int data);
struct node* AddAtBeg(struct node* tail,int data);
struct node* AddAtEnd(struct node* tail,int data);

int main(){
    int choice;
    struct node* tail = malloc (sizeof (struct node));
    struct node* p = tail->next;
    printf("1. Add data to an empty list.\n 2. Add at beginning.\n 3. Add at end. \nv 4. Display.\n 5. Exit.\n");
    printf("\n Enter your choice:\t");
    scanf("%d ",&choice);
    while(1){
        switch (choice){
            case 1:
                // int num;
                // printf("Enter data:\t");
                // scanf("%d",&num);
                AddToEmpty(45);
                break;
            case 2:
                AddAtBeg(tail,34);
                break;
            case 3:
                AddAtEnd(tail,12);
                break;
            case 4:
                do{
                    printf("%d ",p->data);
                    p = p->next;
                }while(p != tail->next);
        }
    }
    tail = AddToEmpty(23);
    tail = AddAtBeg(tail,12);
    tail = AddAtEnd(tail,45);
    tail = AddAtEnd(tail,6);

    do{
        printf("%d\t",p->data);
        p = p->next;
    }while(p!= tail->next);
    return 0;
}
struct node* AddToEmpty(int data){
    struct node* temp = malloc (sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}
struct node* AddAtBeg(struct node* tail,int data){
    struct node* newP = malloc (sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
}
struct node* AddAtEnd(struct node* tail,int data){
    struct node* newP = malloc (sizeof(struct node));
    newP->data = data;
    newP->next = NULL;

    newP->next = tail->next;
    tail->next = newP;
    tail = tail->next;
    return tail; 
}