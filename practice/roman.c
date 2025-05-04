#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int val[] =    {1000, 900, 500, 400, 100,  90,  50,  40,  10,   9,   5,   4,   1};
    char *sym[] = {"M", "CM","D", "CD","C", "XC","L", "XL","X", "IX","V", "IV","I"};

    printf("Roman numeral: ");
    for (i = 0; i < 13; i++) {
        while (num >= val[i]) {
            printf("%s", sym[i]);
            num -= val[i];
        }
    }
    printf("\n");

    return 0;
}


/*
Title: Convert Numbers to Roman Numerals

Description: Roman numerals are a numeral system originating in ancient Rome and were used
throughout the Roman Empire. They are still used today in certain contexts. 

Symbol and their Value:
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000

You are given a decimal number. Your task is to convert the number into its Roman Numeral
representation using the following rules: 

Rules: 
1. Repeating a numeral up to three times represents addition of the number. For example, III is 3. 
2. Only one small numeral can precede a larger numeral to indicate subtraction. For example: 
- 4 is represented as IV (5-1). 
- 9 is represented as IX (10-1). 
3. You should use the subtractive notation for numbers such as 4 (IV) and 9 (IX), meaning you
should represent numbers using the least number of symbols possible. 

Input: 
- The input consists of a single decimal number. 

Output:
- Print the Roman numeral representation of the given decimal number. 

Sample Output 1: 
Enter a decimal number: 58
Roman numeral: LVIII

Sample Output 2: 
Enter a decimal number: 1989
Roman numeral: MCMLXXXIX

Sample Output 3: 
Enter a decimal number: 4
Roman numeral: IV
*/