#include <stdio.h>

int main() {
     int x,y;
    printf("Enter the numbers you want to add:");
    scanf("%d %d",&x,&y);   // Entering the numbers
    if (x<0 && y<0 ){    // Checking which kinds of numbers are those
        x=(-x);
        y=(-y);
        for(int i=0; i<y; i++)
            x++;
        printf("-%d",x);
    }
    else if(x<0 && y>0){
        x=(-x);
        for(int i=0; i<x; i++)
            y--;
        printf("%d",y);
    }
    else if (x>0 && y<0){
        y=(-y);
        for(int i=0; i<y; i++)
            x--;
        printf("%d",x);
    }
    else {
        for (int i=0; i<y; i++)
             x++;
        printf("%d",x);
        return 0;
    }
    return 0;
