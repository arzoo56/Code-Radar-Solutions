#include<stdio.h>
int main(){
    char operator;
    int a,b;
    scanf("%d %d %c",&a,&b,&operator);
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
            printf("Error");
    }
    return 0;
}