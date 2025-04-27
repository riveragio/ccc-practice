#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[30], store[20];
    printf("Enter serial number: ");
    scanf("%s", str);
    int n;
    printf("Enter height of barcode: ");
    scanf("%d", &n);

    int l = strlen(str);

    for(int i = 0; i<l; ++i){
        if(str[i]>='A' && str[i]<='Z') strcat(store, ".");
        if(str[i]=='1') strcat(store, "|");
        if(str[i]=='2') strcat(store, "||");
        if(str[i]=='3') strcat(store, "|||");
        if(str[i]=='4') strcat(store, "||||");
        if(str[i]=='5') strcat(store, "|||||");
        if(str[i]=='6') strcat(store, "||||||");
        if(str[i]=='7') strcat(store, "|||||||");
        if(str[i]=='8') strcat(store, "||||||||");
        if(str[i]=='9') strcat(store, "|||||||||");
    }

    int ll = strlen(store);

    if(ll>13) printf("Invalid Serial Number.\n");
    else{
        for(int i = 1; i<=n; ++i){
            printf("%s\n", store);
        }
    }

    return 0;
}
