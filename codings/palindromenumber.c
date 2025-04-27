#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char str[]){
    for(int i = 0; i<strlen(str); ++i){
        if(str[i]==str[strlen(str)-1]) return 1;
        else return 0;
    }
}

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    char str[20];
    sprintf(str, "%d", n);

    if(check(str)==1) printf("Number is palindrome\n");
    else printf("Number is not palindrome\n");

    return 0;
}
