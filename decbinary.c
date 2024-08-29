#include<stdio.h>
int main(){
    int n;
    printf("Enter integer");
    scanf("%d",&n);
    int binary[32];
    for (int i=0;i<=31;i++){
        binary[i]=n%2;
        n=n/2;
    }
    for (int j=31;j>=0;j--){
        binary[j]=binary[32-j];
    }
    
    return 0;
}