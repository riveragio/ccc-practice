#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    printf("Enter String: ");
    scanf("%s", str);

    int l = strlen(str), sum = 0;
    int n[l];
    printf("Enter Shifts: ");
    for(int i = 0; i<l; ++i){
        scanf("%d", &n[i]);
    }

    printf("Results: ");
    for(int i = l-1; i>=0; --i){
        sum+=n[i];
        sum%=26;
        str[i] = ((str[i]) + sum - 'a') % 26 + 'a';
    }

    printf("%s\n", str);

    return 0;
}
