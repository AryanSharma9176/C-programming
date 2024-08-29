#include<stdio.h>

int main(){
    int n;
    printf("Enter number of integers");
    scanf("%d",&n);
    int* ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available");
        
    }
    else{
        printf("memory allocated eneter the digits");
        for(int i=0;i<n;i++){
            scanf("%d",ptr+i);
        }
        for(int j=0;j<n;j++){
            printf("%d",*(ptr+j));
        }
        ptr=(int*)realloc(ptr,2*n*sizeof(int));
        printf("Enter two more number ");
        for(int i=0;i<2;i++){
            scanf("%d",ptr+i);
        }
        for (int j=0;j<2;j++){
            printf("%d",*(ptr+i));
        }
    }
    return 0;
}