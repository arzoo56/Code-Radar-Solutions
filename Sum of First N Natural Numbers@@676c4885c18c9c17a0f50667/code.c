#include <stdio.h>
int main() {
    int n,sum;
    scanf("%d",&n);
    sum=0;
    int i=0;
    while(i<=n){
        sum+=i;
        printf("%d",sum);
        i++;
    }
    return 0;
}