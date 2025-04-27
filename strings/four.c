// Remove Duplicate Characters
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[40];
    printf("Enter String: ");
    scanf("%s", str);

    for(int i = 0; i<strlen(str); ++i){
        for(int j = i+1; j<strlen(str);){
            if(str[i]==str[j]){
                for(int k = j; k<strlen(str); ++k){
                    str[k] = str[k+1];
                }
            }else{
                ++j;
            }
        }
    }

    printf("\nRemoved Duplicates: %s\n", str);

    return 0;
}
