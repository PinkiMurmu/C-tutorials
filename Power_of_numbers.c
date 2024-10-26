#include <stdio.h>

int main() {
    int a,b,res=1;
    double pow=1.0;
    printf("Enter the base:");    
    scanf("%d",&a);    // Entering the base
    printf("Enter the  power:");
    scanf("%d",&b);     // Entering the power of the base
    if(b>0){
        while(b!=0){
                res=res*a;
                b--;
            }
    
        printf("Result is: %d",res);
    }
    else{
            while(b!=0){
                pow=pow*(1.0/a);
                b++;
            }
        
        printf("Result is: %.10f",pow);
    }
    return 0;
}
