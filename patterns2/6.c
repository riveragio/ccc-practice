#include <stdio.h>
// This function controls the inner loop and the spacing
// factor guided by the outer loop index and the spacing index.
int triangle(int nos, int i){
    char prnt = '*';
    int s, j;
    for (s = nos; s >= 1; s--){ // Spacing factor
        printf("  ");
    }
    for (j = 1; j <= i; j++){ // The inner loop
        printf("%2c", prnt);
    }
    return 0;
}

int main(){

    int i, nos = 5;
    // draws the upper triangle
    for (i = 1; i <= 4; i++){
        triangle(nos, i); // Inner loop construction
        nos++;            // Increments the spacing factor
        printf("\n");
    }

    nos = 7; // Draws the lower triangle skipping its base.
    for (i = 3; i >= 1; i--){
        int j = 1;
        triangle(nos, i); // Inner loop construction
        nos = nos - j;    // Spacing factor
        printf("\n");
    }

    return 0;
}

/*

*
  * *
    * * *
      * * * *
    * * *
  * *
*

*/