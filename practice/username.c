#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';

    char uname[100] = "Xx";
    char *token = strtok(name, " ");
    char last[50];

    // Get first letters of all parts except last name
    while (token != NULL) {
        strcpy(last, token); // keep overwriting to store the last token
        token = strtok(NULL, " ");
        if (token != NULL) {
            strncat(uname, last, 1); // append first letter
        }
    }

    // Append full last name
    strcat(uname, last);
    strcat(uname, "xX");

    printf("Generated Username: %s\n", uname);
    return 0;
}


/*
Title: Old Gamer Username Creator

Description: You are tasked with creating a program that accepts a full name as input and generates
a username in the format: Xx{First name initials}{Last name}xX

Input: 
- A full name (string) with a first name and last name separated by a space. 

Output: 
- The generated username in the specified format. 

Sample Output 1: 
Enter your full name: John Doe
Generated Username: XxJDoexX

Sample Output 2: 
Enter your full name: Sarah Elizabeth Jones
Generated Username: XxSEJonesxX

Sample Output 3: 
Enter your full name: Emily Victoria Clarkson
Generated Username: XxEVClarksonxX
*/