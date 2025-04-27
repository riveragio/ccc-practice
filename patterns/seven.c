// Palindrome Triangular
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = i; j<=n-1; ++j){
            printf("  ");
        }
        for(int j = i; j>=1; --j){ // decrease nums
            printf("%d ", j);
        }
        for(int j = 2; j<=i; ++j){ // increase nums
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
