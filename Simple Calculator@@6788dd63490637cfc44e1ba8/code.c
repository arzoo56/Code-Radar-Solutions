#include <stdio.h>
int main() {
    char operator;
    int a,b;
    scanf("%c",&operator);
    scanf("%d %d ",&a,&b);
    if(operator=='+'){
        printf("%d",a+b);
    }
    else if(operator=='-'){
        printf("%d",a-b);
    }
    else if(operator=='*'){
        printf("%d",a*b);
    }
    else if(operator=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}