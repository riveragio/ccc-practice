#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    int num[n1][n2];

    int locator1x = 0, locator1y = 0;
    int locator2x = 0, locator2y = 0;

    printf("Enter values:\n");
    for(int i = 0; i<n1; ++i){
        for(int j = 0; j<n2; ++j){
            scanf("%d", &num[i][j]);
        }
    }

    int first, second;

    second = num[0][0];
    for(int i = 0; i<n1; ++i){
        for(int j = 0; j<n2; ++j){
            if(num[i][j] > second){
                second = num[i][j];
                locator2x = i;
                locator2y = j;
            }
        }
    }

    first = num[0][0];
    for(int i = 0; i<n1; ++i){
        for(int j = 0; j<n2; ++j){
            if(num[i][j] > first && num[i][j]!=second){
                first = num[i][j];
                locator1x = i;
                locator1y = j;
            }
        }
    }

    printf("\nRESULT\n");
    printf("First Item Location: [%d, %d] -> %d\n", locator1x, locator1y, first);
    printf("Second Item Location: [%d, %d] -> %d\n", locator2x, locator2y, second);

    printf("The strongest value: %d\n", first*second);

    return 0;
}
