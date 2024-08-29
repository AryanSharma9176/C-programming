#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter tow numbers");
    scanf("%d%d",&a,&b);
    printf("Enter operator 1 add 2 sub 3 mul 4 div");
    scanf("%d",&n);
    switch(n){
        case 1: 
            printf("%d+%d=%d",a,b,a+b);
            break;
        case 2: 
            printf("%d-%d=%d",a,b,a-b);
            break;
        case 3: 
            printf("%d/%d=%d",a,b,a/b);
            break;
        case 4:
            printf("%d*%d=%d",a,b,a*b);
            break;
    }
    return 0;
}
// Program to create a simple calculator
// #include <stdio.h>

// int main() {
//     char operation;
//     double n1, n2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);

//     printf("Enter two operands: ");
//     scanf("%lf %lf", &n1, &n2);

//     switch (operation) {
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
//             break;
//         case '-':
//             printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
//             break;
//         case '*':
//             printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
//             break;
//         case '/':
//             printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
//             break;
//         default:
//             printf("Error! Operator is not correct");
//     }

//     return 0;
// }
