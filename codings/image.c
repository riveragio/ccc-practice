#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter the number of image size: ");
    scanf("%d", &n);

    int mtx[n][n];
    printf("Enter the pixels of image:\n");
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            scanf("%d", &mtx[i][j]);
        }
    }

    printf("Results:\n");
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            if(mtx[i][n-(j+1)]==0) printf("1 ");
            else printf("0 "); 
        }
        printf("\n");
    }

    return 0;
}
