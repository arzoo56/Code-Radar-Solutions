#include<stdio.h>
int main(){
    char operator;
    int a,b;
    scanf("%d %d %c", &a, &b, &operator);
    switch(operator){
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("error");
            break;
        default:
            printf("Error");
    }
    return 0;
}


