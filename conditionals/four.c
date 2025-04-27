// Leap Year Check
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter Year: ");
    scanf("%d", &n);

    if(n%4==0 || n%400==0){
        printf("\nIt's a Leap Year\n");
    }else{
        printf("\nIt's Not a Leap Year\n");
    }

    return 0;
}
