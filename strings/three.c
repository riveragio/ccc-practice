// Count Vowels and Consonants
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[20];
    printf("Enter String: ");
    scanf("\n%[^\n]s", str);

    int v = 0, c = 0;

    for(int i = 0; i<strlen(str); ++i) str[i] = tolower(str[i]);

    for(int i = 0; i<strlen(str); ++i){
        if(str[i]=='a' || str[i]=='e' | str[i]=='i' || str[i]=='o' || str[i]=='u') ++v;
        else ++c;
        if(str[i]==' ') --c;
    }

    printf("\nVowels: %d\nConsonants: %d\n", v, c);

    return 0;
}
