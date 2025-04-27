#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int a[n][3];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    
    for(int i=0; i<n; i++){
        if(a[i][2]<41){
            int k = a[i][0]*a[i][1]*a[i][2];
            printf("%d\n",k);
        }
    }
	
    return 0;
}
