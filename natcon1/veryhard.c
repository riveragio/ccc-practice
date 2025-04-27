#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int n = strlen(str);
    int maxLen = 1, start = 0;

    for (int i = 0; i < n; i++) {
        // Odd length palindrome
        int left = i, right = i;
        while (left >= 0 && right < n && str[left] == str[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && str[left] == str[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    if (maxLen == 1) {
        printf("\n404 Not Found\n");
    } else {
        printf("\nThe longest palindrome with a length of %d: ", maxLen);
        for (int i = start; i < start + maxLen; i++)
            printf("%c", str[i]);
        printf("\n");
    }

    return 0;
}
