// #include<stdio.h>
// int fact(int n){
//     if (n==1) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n , r ;
//     char op;
//     printf("Enter value of n and r ");
//     scanf("%d%d",&n,&r);
//     printf ("Enter operation p for permutation and c for combination");
//     scanf("%c",&op);
//     if (op=="p") printf("permutation of %dc%d is %d",n,r,fact(n)/fact(n-r));
//     if (op=="c") printf("combination of %dc%d is %d",n,r,fact(n)/(fact(n-r)*fact(r)));
//     else printf("enter only 1 or 2 ");
//     return 0;
// }
#include<stdio.h>

int fact(int n){
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main(){
    int n, r;
    char op;
    
    printf("Enter value of n and r: ");
    scanf("%d%d", &n, &r);
    
    printf("Enter operation p for permutation and c for combination: ");
    scanf("%c", &op); // Notice the space before %c
    
    if (op == 'p')
        printf("Permutation of %dP%d is %d\n", n, r, fact(n) / fact(n - r));
    else if (op == 'c')
        printf("Combination of %dC%d is %d\n", n, r, fact(n) / (fact(n - r) * fact(r)));
    else
        printf("Enter only 'p' or 'c'\n");
    
    return 0;
}
