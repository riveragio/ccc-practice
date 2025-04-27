// Check Prime Number
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, c = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i){
        if(n%i==0){
            ++c;
        }
    }

    if(c>2){
        printf("\n%d is Not a Prime Number\n", n);
    }else{
        printf("\n%d is a Prime Number\n", n);
    }

    return 0;
}
