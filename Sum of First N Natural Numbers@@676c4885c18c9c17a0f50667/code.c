#include <stdio.h>
int main() {
    int n,sum=0;
    int i=0;
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}