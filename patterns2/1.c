#include <stdio.h>

int main(){

    int n = 5;

    for(int i = 1; i<=n; ++i){
        for(int j = i; j<n; ++j){
            printf("  ");
        }
        for(int j = 1; j<=i; ++j){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*

      *
    * *
  * * *
* * * *

*/