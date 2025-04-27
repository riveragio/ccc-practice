#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter size of X: ");
    scanf("%d", &n);

    for(int i = 1; i<=n-1; ++i){
        for(int j = 1; j<=(n*2)-1; ++j){
            if(j==i || j==(((n*2)-1)/2)+1 || j==(n*2)-i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    for(int i = 1; i<=(n*2)-1; ++i){
        printf("*");
    }

    printf("\n");

    for(int i = 1; i<=n-1; ++i){
        for(int j = 1; j<=(n*2)-1; ++j){
            if(j==n-i || j==(((n*2)-1)/2)+1 || j==n+i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
