// Number Triangular
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i){
        for(int j = i; j<=n-1; ++j){
            printf(" ");
        }
        for(int k = i; k<=(i*2)-1; ++k){
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
