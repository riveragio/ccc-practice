#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int y = n;

    printf("Output: ");
    double num[n];
    for(int i = 0; i<n; ++i){
        double nn = 2*((pow(y,4)) + (22*(pow(y,3))) + (99*(pow(y,2))) - (242*y) + 121);
        --y;
        num[i] = nn;
    }

    printf("Output: ");
    for(int i = n-1; i>=0; --i){
        printf("%.f ", num[i]);
    }

    printf("\n");

    return 0;
}
