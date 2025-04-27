#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int rvs1 = 0, rmd1;
    while(n1!=0){
        rmd1 = n1%10;
        rvs1 = rvs1*10+rmd1;
        n1/=10;
    }

    int rvs2 = 0, rmd2;
    while(n2!=0){
        rmd2 = n2%10;
        rvs2 = rvs2*10+rmd2;
        n2/=10;
    }

    int sum = rvs1+rvs2;
    int rvs = 0, rmd;
    while(sum!=0){
        rmd = sum%10;
        rvs = rvs*10+rmd;
        sum/=10;
    }

    printf("Result: %d\n", rvs);

    return 0;
}
