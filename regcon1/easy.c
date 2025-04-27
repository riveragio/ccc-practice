#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    if(n%2!=0) return 1;

    int mtx[n];
    printf("Integers: ");
    for(int i = 0; i<n; ++i){
        scanf("%d", &mtx[i]);
    }

    int s1 = 0, s2 = 0;

    for(int i = 0; i<n/2; ++i){
        if(mtx[i]==1) s1++;
    }

    for(int i = n/2; i<n; ++i){
        if(mtx[i]==1) s2++;
    }

    if(s1>s2) printf("\nLeft Side Wins!");
    if(s2>s1) printf("\nRight Side Wins!");
    if(s1==s2) printf("\nIt's a tie!");

    return 0;
}
