#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[40];
    printf("Enter string: ");
    scanf("%s", str);

    printf("Output: ");
    for(int i = 0; i<strlen(str); ++i){
        for(int j = i; j<strlen(str); ++j){
            printf("%c", str[j]);
        }
    }

    printf("\n");

    return 0;
}
