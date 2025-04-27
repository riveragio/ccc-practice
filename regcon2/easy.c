#include <stdio.h>
#include <stdlib.h>

int compare_integers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(){

    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    float nums[n];
    printf("Enter numbers: ");
    for(int i = 0; i<n; ++i){
        scanf("%f", &nums[i]);
    }

    qsort(nums, n, sizeof(int), compare_integers);

    if(n%2==0){
        printf("\nMedian: %.1f\n", (nums[n/2]+nums[(n/2)-1])/2);
    }else{
        printf("\nMedian: %.1f\n", nums[n/2]);
    }

    return 0;
}
