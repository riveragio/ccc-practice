#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter a year: ");
    scanf("%d", &n);

    if(n%4==0 || n%400==0){
        printf("Leap Year\n");
    }else{
        printf("Not a Leap Year\n");
    }

    return 0;
}
