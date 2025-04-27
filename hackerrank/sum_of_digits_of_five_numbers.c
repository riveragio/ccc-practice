#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    char c[10000];
    
    sprintf(c, "%d", n);
    
    int sum = 0;
    
    for(int i = 0; i<strlen(c); ++i){
        if(c[i]=='0'){
            sum+=0;
        }
        if(c[i]=='1'){
            sum+=1;
        }
        if(c[i]=='2'){
            sum+=2;
        }
        if(c[i]=='3'){
            sum+=3;
        }
        if(c[i]=='4'){
            sum+=4;
        }
        if(c[i]=='5'){
            sum+=5;
        }
        if(c[i]=='6'){
            sum+=6;
        }
        if(c[i]=='7'){
            sum+=7;
        }
        if(c[i]=='8'){
            sum+=8;
        }
        if(c[i]=='9'){
            sum+=9;
        }
    }
    
    printf("%d\n", sum);
    
    return 0;
}
