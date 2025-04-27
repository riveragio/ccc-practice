// Grade Classification
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter Grades: ");
    scanf("%d", &n);

    if(n>=95 && n<=100) printf("\nGrades Mark: A\n");
    if(n>=90 && n<=94) printf("\nGrades Mark: B\n");
    if(n>=80 && n<=89) printf("\nGrades Mark: C\n");
    if(n>=75 && n<=79) printf("\nGrades Mark: D\n");
    if(n<=74) printf("\nGrades Mark: F\n");

    return 0;
}
