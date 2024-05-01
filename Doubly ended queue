#include <stdio.h>
#include <stdlib.h>
#define size 5

int queue[size];
int F=0,R=-1,num;
int main() {
    int choice;
    while(1){
        printf("\n%d %d\n",F,R);
        printf("1. Enter an element.\n 2. Delete from front.\n 3. Delete from last.\n 4. Display.\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if (R==size-1)
                    printf("Queue is full.");
                else{
                    printf("Enter an element: ");
                    scanf("%d",&num);
                    R=R+1;
                    queue[R]=num;
                }
                break;
            case 2:
                if (R==-1)
                    printf("Queue is empty.");
                else{
                    printf("Deleted element is %d\n",queue[F]);
                    F=F+1;
                }
                break;
            case 3:
                if (R==-1)
                    printf("Queue is empty.");
                else{
                    printf("Deleted element is %d\n",queue[R]);
                    R=R-1;
                }
                break;
            case 4:
                for(int i=F; i<=R; i++)
                    printf("%d\t",queue[i]);
                break;
            default:
                exit(0);
                break;
            }
        }
    return 0;
}
