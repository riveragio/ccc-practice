#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n-i; ++j){
            printf(" ");
        }
        for(int j = 1; j<=i*2-1; ++j){
            if(i==n || j==i*2-1 || j==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
