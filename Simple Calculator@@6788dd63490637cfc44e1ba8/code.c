#include <stdio.h>
int main() {
    char operator;
    int a,b;
    scanf("%c",&operator);
    scanf("%d %d ",&a,&b);
    switch(operator){
        case'+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        case'/':
        printf("%d",a/b);
        break;
    default:
        printf("error");
    }
    return 0;
}