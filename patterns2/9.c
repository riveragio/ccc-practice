#include <stdio.h>

int triangle(int nos, int i, int skip){
    char prnt = '*';
    int s, j;

    for (s = nos; s >= 1; s--){
        printf("  ");
    }

    for (j = 1; j <= i; j++){
        if (skip != 0){
            if (i == 4 && j == 1){
                continue;
            }
        }
        printf("%2c", prnt);
    }
    return 0;
}

int main(){

    int i, nos = 4;
    for (i = 1; i <= 7; (i = i + 2)){
        triangle(nos, i, 0);
        nos--;
        printf("\n");
    }

    nos = 5;
    for (i = 1; i <= 4; i++){
        triangle(1, i, 0);   // one space needed in each case of the formation
        triangle(nos, i, 1); // skip printing one star in the last row.
        nos = nos - 2;
        printf("\n");
    }

    nos = 1;
    for (i = 3; i >= 1; i--){
        triangle(1, i, 0);
        triangle(nos, i, 0);
        nos = nos + 2;
        printf("\n");
    }
    
    nos = 1;
    for (i = 7; i >= 1; (i = i - 2)){
        triangle(nos, i, 0);
        nos++;
        printf("\n");
    }

    return 0;
}

/*

      *
    * * *
  * * * * *
* * * * * * *
*           *
* *       * *
* * *   * * *
* * * * * * *
* * *   * * *
* *       * *
*           *
* * * * * * *
  * * * * *
    * * *
      *

*/