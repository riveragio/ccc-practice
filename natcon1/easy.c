#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int zC = 0, oC = 0;

    for(int i = 0; i<strlen(str); ++i){
        if(str[i]=='z'){
            zC++;
        }else if(str[i]=='o'){
            oC++;
        }
    }

    bool b;

    for(int i = zC; i<strlen(str); ++i){
        if(str[i]=='z'){
            b = true;
            break;
        }else{
            b = false;
        }
    }

    if(str[strlen(str)-1]=='z' || b==true){
        printf("\nNOT SIMILAR!\n");
    }else if(oC==(zC*2)){
        printf("\nSIMILAR!\n");
    }else if(oC!=(zC*2)){
        printf("\nNOT SIMILAR!\n");
    }

    return 0;
}
