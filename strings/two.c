// Check Palindrome String
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    printf("Enter String: ");
    scanf("%s", str);

    int b = 0;

    for(int i = 0; i<strlen(str); ++i){
        if(str[i]==str[strlen(str)-(i+1)]){
            b = 1;
        }else{
            b = 0;
            break;
        }
    }

    // str[strlen(str)-(i+1)]
    if(b==1) printf("\n%s is a palindrome.\n", str);
    if(b==0) printf("\n%s is not a palindrome.\n", str);

    return 0;
}
