// Number Changing Pyramid
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, c = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=i; ++j){
            printf("%d ", c);
            ++c;
        }
        printf("\n");
    }

    return 0;
}
