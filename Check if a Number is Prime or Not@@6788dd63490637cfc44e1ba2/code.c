#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            printf("Not Prime");
            break;
        }
    }
    if (i==n || n==1){
        printf("Prime");
    }
    return 0;
}