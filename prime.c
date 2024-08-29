#include<stdio.h>
int main(){
    int n,m=0;
    printf("Enter a number of terms ");
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        if(n%i==0) m=1;
        else break;
    }
    if(m==0) printf("Prime ");
    else printf("Non prime");
    return 0;
}