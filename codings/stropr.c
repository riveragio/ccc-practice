#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2;
    char c;

    printf("Enter the operation: ");
    scanf("%f %c %f", &n1, &c, &n2);

    if(n2==0 && c=='/'){
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    printf("Result: ");
    if(c=='+') printf("%.2f\n", n1+n2);
    if(c=='-') printf("%.2f\n", n1-n2);
    if(c=='*') printf("%.2f\n", n1*n2);
    if(c=='/') printf("%.2f\n", n1/n2);

    return 0;
}
