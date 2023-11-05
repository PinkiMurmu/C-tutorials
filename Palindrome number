#include <stdio.h>

int main() {
    int n,q,r,res=0,mul=1,count=0,cnt;
    printf("Enter a number:");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        q=q/10;
        count++;
    }
    cnt=count;
    while(q!=0){
        r=q%10;
        while(count!=0){
            mul=mul*r;
            count--;
        }
        res=res+mul;
        count=cnt;
        q=q/10;
        mul=1;
    }
    if(res==n)
        printf("%d is a Palindrome.",n);
    else
        printf("%d is not a palindrome.",n);
    return 0;
}
