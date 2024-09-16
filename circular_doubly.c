#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* doublyCircular(int data);
int main(){
    int data;
    printf("Enter a data:\t");
    scanf("%d",&data);

    struct node* tail;
    tail = doublyCircular(data);
    printf("%d ",tail->data);
}
struct node* doublyCircular(int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    temp->prev = temp;
    return temp;
}