#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}