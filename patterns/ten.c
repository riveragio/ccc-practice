// Butterfly Star Pattern
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n; j++) printf("%s ", ((j>i&&j<=2*n-i)?" ":"*"));
        printf("\n");
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= 2 * n; j++) printf("%s ", ((j>i&&j<=2*n-i)?" ":"*"));
        printf("\n");
    }

    return 0;
}
