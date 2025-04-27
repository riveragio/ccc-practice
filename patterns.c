#include <stdio.h>

// 1. Square Hollow Pattern
void squareHollow(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

// 2. Number Triangular
void numberTriangular(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

// 3. Number Increasing Pyramid
void numberIncreasingPyramid(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// 4. Number Increasing Reverse Pyramid
void numberIncreasingReversePyramid(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// 5. Number Changing Pyramid
void numberChangingPyramid(int n) {
    int count = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", count++);
        }
        printf("\n");
    }
}

// 6. Zero-One Triangle
void zeroOneTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
}

// 7. Palindrome Triangular
void palindromeTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        for(int j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}

// 8. Rhombus Pattern
void rhombusPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s < i; s++) printf(" ");
        for(int j = 1; j <= n; j++) printf("* ");
        printf("\n");
    }
}

// 9. Diamond Pattern
void diamondPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int s = i; s < n; s++) printf(" ");
        for(int j = 1; j <= (2*i - 1); j++) printf("*");
        printf("\n");
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int s = n; s > i; s--) printf(" ");
        for(int j = 1; j <= (2*i - 1); j++) printf("*");
        printf("\n");
    }
}

// 10. Butterfly Star Pattern
void butterflyPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) printf("*");
        for(int s = 1; s <= 2*(n-i); s++) printf(" ");
        for(int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) printf("*");
        for(int s = 1; s <= 2*(n-i); s++) printf(" ");
        for(int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

// You can add main() and the remaining rows here
int main() {
    int n = 5;

    printf("1. Square Hollow Pattern:\n");
    squareHollow(n);

    printf("\n2. Number Triangular Pattern:\n");
    numberTriangular(n);

    printf("\n3. Number Increasing Pyramid:\n");
    numberIncreasingPyramid(n);

    printf("\n4. Number Increasing Reverse Pyramid:\n");
    numberIncreasingReversePyramid(n);

    printf("\n5. Number Changing Pyramid:\n");
    numberChangingPyramid(n);

    printf("\n6. Zero-One Triangle:\n");
    zeroOneTriangle(n);

    printf("\n7. Palindrome Triangular:\n");
    palindromeTriangle(n);

    printf("\n8. Rhombus Pattern:\n");
    rhombusPattern(n);

    printf("\n9. Diamond Pattern:\n");
    diamondPattern(n);

    printf("\n10. Butterfly Star Pattern:\n");
    butterflyPattern(n);

    return 0;
}
