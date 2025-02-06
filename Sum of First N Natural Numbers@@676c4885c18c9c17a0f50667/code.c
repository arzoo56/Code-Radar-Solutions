#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        sum+=i;
        printf("%d",sum);
        i++;
    }
    return 0;
}