#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[100], ch;
    int i, j, n;

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Enter a character: ");
    scanf(" %c", &ch); // space before %c to consume any leftover newline

    n = strlen(s);
    int d[n], pos[n], cnt = 0;

    // Store all positions of ch
    for (i = 0; i < n; i++) {
        if (s[i] == ch) {
            pos[cnt++] = i;
        }
    }

    // Calculate shortest distances
    for (i = 0; i < n; i++) {
        int min = n;
        for (j = 0; j < cnt; j++) {
            int dist = abs(i - pos[j]);
            if (dist < min)
                min = dist;
        }
        d[i] = min;
    }

    printf("Shortest distances from '%c' in the string:\n", ch);
    for (i = 0; i < n; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}


/*
Title: Shortest Character Distance

Description: You are given a string s and a character c. Your task is to find the shortest distance
from each character in the string s to the character c. If the character in the string is c itself,
the distance should be marked as 0;

Input: 
- The first line contains a string s. 
- The second liine contains a single character c. 

Output:
- Print a list of integers where each integer represents the shortest distance from the
corresping character in s to the character c. 

Sample Output 1: 
Enter a string: banana
Enter a character: a
Shortest distances from 'a' in the string: 
1 0 1 0 1 0

Sample Output 2: 
Enter a string: hello
Enter a character: l
Shortest distances from 'l' in the string: 
2 1 0 0 1

Sample Output 3:
Enter a string: apple
Enter a character: e
Shortest distances from 'e' in the string: 
4 3 2 1 0
*/