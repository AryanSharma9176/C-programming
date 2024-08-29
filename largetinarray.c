#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and columns ");
    scanf("%d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("Enter elements ");
            scanf("%d",&arr[i][j]);
        }

    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
            
        }

    }
    return 0;
    

}