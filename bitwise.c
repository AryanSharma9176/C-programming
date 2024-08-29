#include<stdio.h>
int main(){
    int n;
    printf("Enter integer");
    scanf("%d",&n);
    if(n & 1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    return 0;
}