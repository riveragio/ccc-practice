#include <stdio.h>
#include <stdlib.h>

int main(){

    int row, col, c = 0;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of cols: ");
    scanf("%d", &col);

    char mtx[row][col];
    for(int i = 0; i<row; ++i){
        for(int j = 0; j<col; ++j){
            scanf("%s", &mtx[i][j]);
        }
    }

    printf("\nV Output:");
    for(int i = 0; i<row;){
        for(int j = 0; j<col; ++j){
            if(j>=col/2){
                printf("%c", mtx[i][j]);
                --i;
                ++c;
            }else{
                printf("%c", mtx[i][j]);
                ++i;
                ++c;
            }
        }
        if(c==col) break;
    }

    printf("\n");

    return 0;
}
