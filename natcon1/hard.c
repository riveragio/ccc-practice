#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    int mtx[n1][n2];
    printf("Enter values:\n");
    for(int i = 0; i<n1; ++i){
        for(int j = 0; j<n2; ++j){
            scanf("%d", &mtx[i][j]);
        }
    }    

    int t = 0, b = n1-1, l = 0, r = n2-1;

    printf("Output:\n");
    while(t<=b && l<=r){
        for(int i = l; i<=r; ++i)
            printf("%d ", mtx[t][i]);
        ++t;

        for(int i = t; i<=b; ++i)
            printf("%d ", mtx[i][r]);
        --r;

        if(t<=b){
            for(int i = r; i>=l; --i)
                printf("%d ", mtx[b][i]);
            --b;
        }
        
        if(l<=r){
            for(int i = b; i>=t; --i)
                printf("%d ", mtx[i][l]);
            --l;
        }
    }

    printf("\n");

    return 0;
}
