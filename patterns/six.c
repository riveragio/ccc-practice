// Zero-One Triangle
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=i; ++j){
            printf("%d ", ((i+j)%2==0)?1:0);
        }
        printf("\n");
    }

    return 0;
}
