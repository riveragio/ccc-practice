#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Input n: ");
    scanf("%d", &n);

    if(n%2==0) n++;

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            if(i==1 || i==n) printf("z");
            else if(j==n-i+1) printf("z");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
