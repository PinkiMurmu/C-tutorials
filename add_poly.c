// #include <stdio.h>
// int main(){
//     printf("Hello");
//     return 0;
// }
#include <stdio.h>
#define max 10

int main() {
    int arr1[max],arr2[max],deg1, deg2;
    printf("Enter the highest degree of the first polyomial:");
    scanf("%d\n",&deg1);
    printf("Enter the highest degree of the second polynomial:");
    scanf("%d\n\n",&deg2);
    printf("Write down the elements of the first polynomial:\n");
    for (int i=deg1; i>=0; i--){
        printf("Coefficient of x^%d :\t",i);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of the second polynomial :\n");
    for (int i=deg2; i>=0; i--){
        printf("Coefficient of x^%d : \t",i);
        scanf("%d ",&arr2[i]);
    }
    if (deg1<deg2){deg1=deg2;}
    printf("After addition the final polynomial we got is :");
    for (int i=deg1; i>=0; i--){
        if (arr1[i]+arr2[i]!=0)
            printf("%d x^%d\t",arr1[i]+arr2[i],i);
        else
            continue;
    }
    return 0;
}