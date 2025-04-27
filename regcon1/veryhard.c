#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include <stdbool.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))  

void substring(char s[], char sub[], int p, int len){  
    int c = 0;  
    while (c < len) {  
    sub[c] = s[p+c];  
    c++;  
    }  
    sub[c] = '\0';  
}
  
int lcp(char s[], char t[],char a[]){  
    int n = MIN(strlen(s),strlen(t));  
    for(int i = 0; i < n; i++){  
        if(s[i] != t[i]){  
            substring(s,a,0,i);  
            return 0;  
        }  
    }  
    substring(s,a,0,n);  
    return 0;  
}  

char *removes(char *c){
    int i = 0, j = 0;
    while(c[i]){
        if(c[i] != ' '){
            c[j++] = c[i];
            i++;
        }
    }
    c[j] = '\0';
    return c;
}

int main(){

    char str[50];
    printf("String to evaluate: ");
    scanf("\n%[^\n]s", str);
    removes(str);

    int n = strlen(str);
    char lrs[30], x[30], sub[30],sub1[30]; 
    bool b = false;

    for(int i = 0; i < n; i++){  
        for(int j = i+1; j < n; j++){  
            substring(str,sub,i,n);  
            substring(str,sub1,j,n);  
            lcp(sub,sub1,x);
            if(strlen(x) > strlen(lrs)){
                strncpy(lrs, x, strlen(x));
                b = true;
            }
        }  
    }  

    if(b){
        printf("\nLongest Consecutive Equal Substring Found: %s\n", lrs);
    }else{
        printf("\n404 Not Found\n");
    }

    return 0;
}