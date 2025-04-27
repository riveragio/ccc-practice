#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char str[10];
    printf("String: ");
    scanf("%s", str);

    int l = strlen(str);

    for(int i = 0; i<l; ++i){
        printf("%c", str[i]);
        for(int j = 1; j<l; ++j){
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
