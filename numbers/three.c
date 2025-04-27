// Find Factorial
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, f = 1;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i){
        f*=i;
    }

    printf("\nFactorial of %d: %d\n", n, f);

    return 0;
}
