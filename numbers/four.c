// Sum of Digits
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, d, s = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    while(n>0){
        d = n%10;
        s+=d;
        n/=10;
    }

    printf("\nSum = %d\n", s);

    return 0;
}
