#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b or a>c){
        printf("%d",a);
    }
    else if(b>a or b>c){
        printf("%d",b);
    }
    else if(c>a or c>b){
        printf("%d",c);
    }
    else{
        printf("no");
    }
    return 0;
}