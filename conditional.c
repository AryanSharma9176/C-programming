#include<stdio.h>
int main(){
    int n;
    printf("Enter integer");
    scanf("%d",&n);
    (n & 1)?printf("Odd"):printf("Even");
    return 0;
}