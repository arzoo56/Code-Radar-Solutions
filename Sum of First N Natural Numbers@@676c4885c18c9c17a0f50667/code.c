#include <stdio.h>
int main() {
    int n,sum=0;
    int i=0;
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        printf("%d",sum);
        i++;
    }
    return 0;
}