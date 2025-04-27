#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int mtx[n];
    for(int i = 0; i<n; ++i){
        printf("Enter element %d: ", i);
        scanf("%d", &mtx[i]);
    }

    for(int i = 0; i<n; ++i){
        for(int j = i+1; j<n; ++j){
            if(mtx[i]>mtx[j]){
                printf("False\n");
                return 1;
            }
        }
    }

    printf("True\n");

    return 0;
}
