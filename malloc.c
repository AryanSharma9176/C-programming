#include <stdio.h>
int main(){
    int* ptr;
    int a;
    printf("Enter amt of memory to be allocated ");
    scanf("%d",&a);
    ptr=(int*)malloc(a*sizeof(int));
    if (ptr==NULL){
        printf("Memory not allocated ");

    }
    else{
        printf("Memory is allocated ");
        for(int i=0;i<=a;i++){
            ptr[i]=i;
        }
        for (int i=0;i<=a;i++){
            printf("%d",ptr[i]);
        }
    }
    return 0;
}