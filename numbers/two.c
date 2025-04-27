// Armstrong Number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int n, d, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    int nn = n;

    char str[10];
    sprintf(str, "%d", n);

    int l = strlen(str);

    while(n>0){
        d = n%10;
        sum+=pow(d, l);
        n/=10;
    }

    if(nn==sum){
        printf("\n%d is a Armstrong Number\n", nn);
    }else{
        printf("\n%d is Not a Armstrong Number\n", nn);
    }

    return 0;
}
