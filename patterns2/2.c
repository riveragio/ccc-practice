#include <stdio.h>

int main(){

    char prnt = '*';
    int i, j, k, s, c = 1, nos = 9;

    for (i = 1; c <= 4; i++){
        // As we want to print the columns in odd sequence viz. 1,3,5,.etc
        if ((i % 2) != 0){
            for (j = 1; j <= i; j++){
                printf("%2c", prnt);
            }

            for (s = nos; s >= 1; s--){ // The spacing factor
                if (c == 4 && s == 1){
                    break;
                }
                printf("  ");
            }

            for (k = 1; k <= i; k++){
                if (c == 4 && k == 5){
                    break;
                }
                printf("%2c", prnt);
            }
            printf("\n");
            nos = nos - 4; // controls the spacing factor
            ++c;
        }
    }

    return 0;
}

/*

*                   *
* * *           * * *
* * * * *   * * * * *
* * * * * * * * * * * 

*/