#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers in the list: ");
    scanf("%d", &n);

    int a[n], lis[n];

    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        lis[i] = 1; // initialize LIS values to 1
    }

    // Dynamic Programming to calculate LIS for each element
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    // Find the maximum LIS value
    int max = lis[0];
    for (int i = 1; i < n; i++) {
        if (lis[i] > max)
            max = lis[i];
    }

    printf("The length of the longest increasing subsequence is: %d\n", max);

    return 0;
}


/*
Title: Longest Increasing Subsequence

Description: You are given a list of integers. Your task is to find the length of the longest
increasing subsequence (LIS) in the list. A subsequence derived from the list by deleting some or no
elements, without changing the order of the remaining elements. 

Input: 
- The first input consists of the number of integers N. 
- The second input consists of N number of integers. 

Output: 
- Print the length of the longest increasing subsequence in the list. 

Sample Output 1: 
Enter the number of integers in the list: 6
Enter the integers: 
10 9 2 5 3 7
The length of the longest increasing subsequence is: 3

Sample Output 2: 
Enter the number of integers in the list: 8
Enter the integers:
10 9 2 5 3 7 101 18
The length of the longest increasing subsequence is: 4

Sample Output 3: 
Enter the number of integers in the list: 4
Enter the integers:
4 10 4 3
The length of the longest increasing subsequence is: 2
*/