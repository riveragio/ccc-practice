#include <stdio.h>

int main() {
    int n;
    printf("Enter number of positive integers[0-99]: ");
    scanf("%d", &n);

    int arr[n];
    int freq[100] = {0}; // For numbers 0 to 99

    printf("Enter integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; // Count frequency
    }

    int least = -1, most = -1;
    int leastFreq = 1000, mostFreq = -1;

    // Traverse from left to right to favor the rightmost in case of tie
    for (int i = 0; i < n; i++) {
        int num = arr[i];

        if (freq[num] <= leastFreq) {
            leastFreq = freq[num];
            least = num;
        }

        if (freq[num] >= mostFreq) {
            mostFreq = freq[num];
            most = num;
        }
    }

    printf("\nLeast occurring integer: %d\n", least);
    printf("Most occurring integer: %d\n", most);

    return 0;
}


/*
Title: Least Occurring and Most Occurring Integers

Description: In this problem, you are tasked to make a program that accepts a series of integer ranging from 0 to 99. Then, you need to find the least occurring integer and most occurring integer frmo the inputs.

Notes: 
1. There is a possibility that the least occurring integer is the same as the most occurring integer. 
2. In case of two or more least occurring integers and most occurring integers, always choose the integer favoring the right. 
a. Example: 1 2 3 2 3
    i. Least occurring integer: 1
    ii. Most occurring integer: 3 (since it's the last one that appeared in the series)

Test Case 1:
Enter number of positive integers[0-99]: 5
Enter integers: 1 2 3 2 3

Least occurring integer: 1
Most occurring integer: 3

Test Case 2:
Enter number of positive integers[0-99]: 5
Enter integers: 3 2 3 2 1

Least occurring integer: 1
Most occurring integer: 2

Test Case 3:
Enter number of positive integers[0-99]: 7
Enter integers: 0 0 1 1 9 9 1

Least occurring integer: 9
Most occurring integer: 1

*/