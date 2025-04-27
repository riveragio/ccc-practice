// Sign of a Number
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n>0) printf("\nNumber is Positive\n");
    if(n<0) printf("\nNumber is Negative\n");
    if(n==0) printf("\nNumber is Zero\n");

    return 0;
}
