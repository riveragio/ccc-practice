#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[30];
    int k;

    printf("Enter the string to encrypt: ");
    scanf("%s", str);
    printf("Enter the shift value (k): ");
    scanf("%d", &k);

    printf("Encrypted string: ");
    for(int i = 0; i<strlen(str); ++i){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = ((str[i]-'A'+k)%26) + 'A';
        }else if(str[i]>='a' && str[i]<='z'){
            str[i] = ((str[i]-'a'+k)%26) + 'a';
        }
    }

    printf("%s\n", str);

    return 0;
}
