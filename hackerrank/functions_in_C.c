#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d){
    int nums[] = {a,b,c,d};
    int max = nums[0];
    
    for(int i = 0; i<4; ++i){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
