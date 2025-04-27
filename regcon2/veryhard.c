#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[20];
    printf("String: ");
    scanf("%s", str);

    int i1, i2;
    printf("First Index: ");
    scanf("%d", &i1);
    printf("Second Index: ");
    scanf("%d", &i2);

    printf("\nPreprocessed String: \n");    
    printf("Switched String: \n");

    return 0;
}
