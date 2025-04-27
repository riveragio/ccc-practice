#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, max = 0;
    printf("Enter number of BarChart Values: ");
    scanf("%d", &n);

    int values[n];
    printf("Enter BarChart Values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
        if (values[i] > max)
            max = values[i];
    }

    int width = n * 2 + 3; // Total width including borders and spaces

    // Top border
    for (int i = 0; i < width; i++)
        printf("0 ");
    printf("\n");

    // Body
    for (int row = max; row >= 1; row--) {
        printf("0 "); // Left border
        for (int i = 0; i < n; i++) {
            if (values[i] >= row)
                printf("# ");
            else
                printf("  ");
        }
        printf("0\n"); // Right border
    }

    // Bottom border
    for (int i = 0; i < width; i++)
        printf("0 ");
    printf("\n");

    return 0;
}


/*

Title: Chart in a Box

Description: It's easy to make a simple bar chart, but how about a bar chart inside a box?
Given the values in a chrat, generate the chart in a box and follow the format and spacing.

Input:
1. Number of BarChart Values
- 3

2. BarChart Values
- 3 2 4

Output:
Enter number of BarChart Values: 3
Enter BarChart Values: 3 2 4
0 0 0 0 0 0 0
0           0
0       #   0
0   #   #   0
0   # # #   0
0   # # #   0
0 0 0 0 0 0 0

*/