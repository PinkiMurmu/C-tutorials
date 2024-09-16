#include <stdio.h>
#include <stdlib.h>
#define N 5

void push();
void pop();
void display();
int arr[N],top=-1;

int main() {
    int choice;
    while(1){
        printf("1. Push an element.\n 2. Pop an element.\n 3. Display.\n\n");
        printf("Enter your choice:\t");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Wrong entry.");
                exit(0);
        }
    }
    return 0;
}
void push (){
    if (top==N-1)
        printf("Stack overflow!");
    else{
        int x;
        printf("Enter an element: ");
        scanf("%d",&x);
        top=top+1;
        arr[top]=x;
    }
}
void pop(){
    if (top==-1)
        printf("Stack underflow!");
    else{
        printf("Popped item is : %d\n",arr[top]);
        top=top-1;
    }
}
void display(){
    printf("The stack now is:");
    for (int i=top; i>=0; i--)
        printf("%d\n ",arr[i]);
}