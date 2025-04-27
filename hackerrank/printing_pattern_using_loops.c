#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n, m;
    scanf("%d", &n);
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
                //min = i<j ? i:j;
                if(i<j){
                    m = i;
                }else{
                    m = j;
                }
                
                //min = 2*n-2-i < min ? 2*n-2-i : min;
                if(2*n-2-i < m){
                    m = 2*n-2-i;
                }else{
                    m = m;
                }
                
                //min = 2*n-2-j < min ? 2*n-2-j : min;
                if(2*n-2-j < m){
                    m = 2*n-2-j;
                }else{
                    m = m;
                }
                
                printf("%d ",n-m);
        }printf("\n");
    }
    return 0;
}
