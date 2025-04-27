#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char str[]){
    int e = 0, s = 0, n = 0, d = 0;
    for(int i = 0; i<strlen(str); ++i){
        if(str[i]>='0' && str[i]<='9'){
            n = 1;
        }else if(str[i]=='e' || str[i]=='E'){
            if(e || !n){
                return 0;
            }else{
                e = 1, s = 0, n = 0, d = 0;
            }
        }else if(str[i]=='+' || str[i]=='-'){
            if(s || n || d){
                return 0;
            }else{
                s = 1;
            }
        }else if(str[i]=='.'){
            if(d || e){
                return 0;
            }else{
                d = 1;
            }
        }else{
            return 0;
        }
    }
    return n;
}

int main(){

    char s[20];
    printf("Enter a string: ");
    scanf("%s", s);

    if(check(s)==1){
        printf("Valid decimal number\n");
    }else{
        printf("Invalid decimal number\n");
    }

    return 0;
}
