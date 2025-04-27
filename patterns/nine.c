// Diamond Pattern
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i){
        for(int j = i; j<=n-1; ++j){
            printf("  ");
        }
        for(int j = 1; j<=i; ++j){
            printf("*   ");
        }
        printf("\n");
    }

    for(int i = 1; i<=n-1; ++i){
        for(int j = i+1; j>1; --j){
            printf("  ");
        }
        for(int j = n-1; j>=i; --j){
            printf("*   ");
        }
        printf("\n");
    }

    return 0;
}
