#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}; // ASCII size

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Count character occurrences (ignore spaces)
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            count[(unsigned char)str[i]]++;
        }
    }

    printf("Duplicate characters and their counts:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}


/*
Title: Duplicate Characters

Description: You are given a string. Your task is to find all duplicate characters in the string
and count their occurrences. Uppercase and lowercase letters are treated as different characters,
and spaces should not be included. The duplicate characters should be listed in alphabetical order. 

Input: 
- The input consists of a single string.

Output: 
- Print each duplicate character and its count in alphabetical order. 

Sample Output 1: 
Enter the string: apple
Duplicate characters and their counts: 
p: 2

Sample Output 2: 
Enter the string: banana
Duplicate characters and their counts: 
a: 3
n: 2

Sample Output:
Enter the string: AaBbCcDdEe
Duplicate characters and their counts: 
*/