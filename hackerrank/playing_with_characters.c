#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char c;
    char s[50];
    char str[100];

    scanf("%c", &c);
    scanf("%s", s);
    scanf("\n%[^\n]s", str);
    
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s\n", str);
    
    return 0;
}
