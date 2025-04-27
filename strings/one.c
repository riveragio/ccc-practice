// Reverse a String
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    printf("Enter String: ");
    scanf("\n%[^\n]s", str);

    printf("\nOriginal String: %s\n", str);
    printf("Reversed String: ");

    for(int i = strlen(str); i>=0; --i){
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}

// Challenge: reverse word by word only