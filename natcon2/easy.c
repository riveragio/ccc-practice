#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter size of arrow: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            if(j==i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }

    for(int i = 1; i<=n-1; ++i){
        for(int j = n-1; j>0; --j){
            if(j==i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
